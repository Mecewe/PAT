/*
Tip:库存可能不是整数以及限制有剩余 
*/

#include<stdio.h>

int main()
{
	int n, d,i,t,shen=0;
	scanf("%d %d", &n, &d);
	float a[2][n];
	float ave[n],pro=0,max;
	for (i = 0; i < n; i++){
		scanf("%f", &a[0][i]);
		shen +=a[0][i];
	}
	for (i = 0; i < n; i++){
		scanf("%f", &a[1][i]);
		ave[i] = a[1][i] / a[0][i];
	}
	
	while (d >0 && shen > 0){
		max = 0;
		for (i = 0; i < n; i++){
			if (max < ave[i]){
				max = ave[i];
				t = i;
			}
		}
		if (a[0][t] >= d){
			pro = pro+ave[t] * d;
			shen =shen-d;
			d = 0;
		}
		else{
			pro = pro+ave[t] * a[0][t];
			d = d - a[0][t];
			shen =shen - a[0][t];
			ave[t] = 0;
		}
	}
	printf("%.2f\n", pro);
	
	
	return 0;
}


