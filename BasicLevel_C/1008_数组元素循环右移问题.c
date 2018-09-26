#include<stdio.h>

int main()
{
	int a[300],n,m;
	int i;

	scanf("%d %d", &n,&m);
	m = m % n;
	for (i = m; i <n+m; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; i++){
		if (i < m){
			a[i] = a[i + n ];
		}
		if (i < n - 1){
			printf("%d ", a[i]);
			
		}
		else{
			printf("%d", a[i]);
		}
	}
	return 0;
}
