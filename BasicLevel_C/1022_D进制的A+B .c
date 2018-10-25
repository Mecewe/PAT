/*
Tip:数组的界限以及和为0时情况
*/

#include<stdio.h>

int main()
{
	int i = 0, n = 0, a, b, sum, d, arr[100] = { 0 };
	scanf("%d %d %d", &a, &b, &d);
	sum = a + b;
	if (sum == 0){
		printf("0");
		return 0;
	}
	while (sum !=0)
	{
		arr[n] = sum%d;
		sum /= d;
		n++;
	}
	for (i = n - 1; i >= 0; i--){
		printf("%d", arr[i]);
	}
	return 0;
}

