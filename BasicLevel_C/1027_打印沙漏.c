#include<stdio.h>
#include<math.h>

int main()
{
	int n, x,count=0 ,yu;
	char icon;
	scanf("%d %c", &x, &icon);
	n = (int)sqrt((x + 1) / 2.0);
	yu = x - 2 * n*n + 1;
	for (int i = n; i > 0; i--){
		count = n;
		while (count > i){
			printf(" ");
			count--;
		}
		for (int j = 2 * i - 1;j>0; j--){
			printf("%c", icon);
		}
		printf("\n");
	}
	for (int i = 2; i <=n; i++){
		count = n;
		while (count > i){
			printf(" ");
			count--;
		}
		for (int j = 2 * i - 1; j>0; j--){
			printf("%c", icon);
		}
		printf("\n");
	}
	printf("%d\n", yu);
	return 0;
}
