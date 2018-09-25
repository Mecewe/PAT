#include<stdio.h>

int main()
{
	int maxNumber;
	int isPrime[100000] ;
	int i, x, count=0, pre = 1;

	scanf("%d", &maxNumber);
	for (i = 0; i <=maxNumber; i++){
		isPrime[i] = 1;
	}
	for (x = 2; x <= maxNumber; x++){
		if (isPrime[x]){
			for (i = 2; i*x <= maxNumber; i++){
				isPrime[i*x] = 0;
			}
		}
	}
	for (i = 2; i <= maxNumber; i++){
		if (isPrime[i]) {
			if (i - pre == 2){
				count++;
			}		
			pre = i;
		}
	}
	printf("%d", count);
	return 0;
}
