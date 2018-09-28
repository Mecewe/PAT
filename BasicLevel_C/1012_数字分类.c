/*

对于a[500]，尝试用*a不成功，疑惑？ 

*/

#include<stdio.h>

int main()
{
	int n, count[5][2] = {0}, i,f=1;
	int a[500];
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
		
		switch (a[i] % 5)
		{
		case 0: 
			if (a[i] % 2 == 0){
				count[0][0] = count[0][0] + a[i];
				count[0][1]++;
		}
			break;
		case 1: count[1][0] = count[1][0] + a[i] * f;
				f = -f;
				count[1][1]++;
				break;
		case 2: count[2][0]++;
				count[2][1]++;
				break;
		case 3: count[3][0] = count[3][0] + a[i];
			count[3][1]++;
			break;
		case 4: if (count[4][0] < a[i]){
					count[4][0] = a[i];
					count[4][1]++;
		}
			break;
		}
	
	}

	for (i = 0; i < 5; i++){
		if (count[i][1] == 0){
			printf("N");
		}
		else if(i == 3){
			printf("%.1f", (float)count[3][0] / count[3][1]);
		}
		else{
			printf("%d", count[i][0]);
		}
		if (i < 4){
			printf(" ");
		}
	}

	return 0;
}
