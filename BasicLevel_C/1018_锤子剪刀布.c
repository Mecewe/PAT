#include<stdio.h>

int main()
{
	char a[3] = { 'B', 'C','J' };
	int N,i,w[2][3]={0},win,pin=0,n1=0,n2=0,max1,max2;
	scanf("%d", &N);
	char c[N][2];
	for (i = 0; i < N; i++){
		scanf("%s %s", &c[i][0], &c[i][1]);
		if (c[i][0]<c[i][1]){
			if (c[i][0] + c[i][1] == 'B' + 'J'){	//J
				w[1][2]++;
			}
			else if (c[i][0] + c[i][1] == 'B' + 'C')	//B
			{
				w[0][0]++;
			}
			else if (c[i][0] + c[i][1] == 'J' + 'C')	//C
			{
				w[0][1]++;
			}
		}
		else if (c[i][0] > c[i][1]){
			if (c[i][0] + c[i][1] == 'B' + 'J'){   //J
				w[0][2]++;
			}
			else if (c[i][0] + c[i][1] == 'B' + 'C')  //B
			{
				w[1][0]++;
			}
			else if (c[i][0] + c[i][1] == 'J' + 'C')   //C
			{
				w[1][1]++;
			}
		}
		else{
			pin++;
		}
	}
	win = w[0][0] + w[0][1] + w[0][2];
	max1 = 0;
	max2 = 0;
	for (i = 0; i < 3; i++){  //B C J
		if (max1 < w[0][i]){
			max1=w[0][i];
			n1 = i;
		}
		if (max2 < w[1][i]){
			max2=w[1][i];
			n2 = i;
		}
	}
	printf("%d %d %d\n", win, pin, N - win - pin);
	printf("%d %d %d\n", N - win - pin, pin, win);
	printf("%c %c", a[n1], a[n2]);
	return 0;
}

