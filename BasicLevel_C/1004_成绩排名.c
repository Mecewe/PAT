#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, min, max, min_n=0, max_n=0;
	scanf("%d", &n);
	char name[100][11],schoolNumber[100][11],grade[100][5];
	min = 0;
	max = 100;
	for (i = 0; i<n; i++){
		scanf("%s %s %s", &name[i], schoolNumber[i], grade[i]);
		
		if (min >= atoi(grade[i])){
			min = atoi(grade[i]);
			min_n = i;
		}
		if (max <= atoi(grade[i])){
			max = atoi(grade[i]);
			max_n = i;
		}
	}
	printf("%s %s\n", name[max_n], schoolNumber[max_n]);
	printf("%s %s\n", name[min_n], schoolNumber[min_n]);
	return 0;
}
