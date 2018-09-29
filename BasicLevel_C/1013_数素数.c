#include<stdio.h>

int main()
{
	int i=3,m,n,count = 1,number,s=0;
	int prime[10000] = { 2 };
	int isPrime(int, int*, int);
	scanf("%d %d", &m, &n);
	while (count <= n){
		if (isPrime(i, prime, count)){
			prime[count++] = i;
		}
		i++;
	}
	for (i = m; i <= n; i++){
		printf("%d", prime[i-1]);
		s++;

		if (s % 10 !=0 && i<n){
			printf(" ");
		}
		else {
			printf("\n");
		}
	}

	return 0;
}

int isPrime(int x, int knownPrimes[], int numberofKnownPrime){
	int ret = 1;
	int i;
	for (i = 0; i < numberofKnownPrime; i++){
		if (x % knownPrimes[i] == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}
