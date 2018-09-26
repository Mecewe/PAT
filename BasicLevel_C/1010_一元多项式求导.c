#include<stdio.h>

int main()
{
	int n = 1, a[100], i, a0[100], count = 0, flag = 0;
	while (scanf("%d", &a[n]) != EOF)
	{
		n++;
	}
	for (i = 1; i <= n / 2; i++){
		if (a[i * 2] != 0){
			a0[count * 2] = a[i * 2 - 1] * a[i * 2];
			a0[count * 2 + 1] = a[i * 2] - 1;
			count++;
			flag = 1;
		}
		else {
			if (flag == 0){
				a0[count * 2] = 0;
				a0[count * 2 + 1] = 0;
				count++;
			}
		}
	}
	for (i = 0; i < count; i++){
		printf("%d %d", a0[i * 2], a0[i * 2 + 1]);
		if (i < count - 1){
			printf(" ");
		}
	}

	return 0;
}
