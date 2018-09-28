#include<stdio.h>

int main()
{
	int t,a[10][3],i;
	long c;
	scanf("%d", &t);
	for (i = 0; i < t; i++){
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
	for (i = 0; i < t; i++){
	  c=(long)a[i][0] + a[i][1];
		if (c>a[i][2]){
			printf("Case #%d: true\n", i+1);
		}
		else{
			printf("Case #%d: false\n", i+1);
		}
		
	}

	return 0;
}
