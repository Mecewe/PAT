/*
	%04d自动补齐高位0
*/

#include<stdio.h>

int dijian(int);
int dizeng(int);

int main()
{
	int n, i,a,b;
	scanf("%d", &n);
	if (n == 0){
		printf("0000 - 0000 = 0000\n");
		return 0;
	}
	else if(n==6174){
		printf("7641 - 1467 = 6174\n");
		return 0;
	}
	while (n != 0 && n != 6174){
		a = dijian(n);
		b = dizeng(n);
		n = a - b;
		if (n == 0){
			printf("%d - %04d = 0000\n", a, b);
		}
		else{
			printf("%d - %04d = %04d\n", a, b,n);
		}			
	}
	return 0;
}

int dijian(int n)
{
	int a[10] = { 0 }, i, num = 0;
	for (i = 4; i > 0; i--){
		a[n % 10]++;
		n = n / 10;
	}
	for (i = 9; i >= 0; i--){
		while (a[i]>0){
			num = num*10+i;
			a[i]--;
		}
	}
	return num;
}

int dizeng(int n)
{
	int a[10] = { 0 }, i, num = 0;
	for (i = 4; i > 0; i--){
		a[n % 10]++;
		n = n / 10;
	}
	for (i = 0; i < 10; i++){
		while (a[i]>0){
			num = num * 10 + i; 
			a[i]--;
		}
	}
	return num;
}
