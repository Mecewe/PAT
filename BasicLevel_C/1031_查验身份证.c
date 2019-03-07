/*
Tip:不需要二位数组，读题不仔细 
*/ 
#include<stdio.h>

int main()
{
	int n, sum = 0, m=1, tag[100] = {1};
	int quan[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	char M[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
	char s[100][19];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", s[i]);
		sum = 0;
		for (int j = 0; j < 17; j++){
			if (s[i][j] >= '0'&& s[i][j] <= '9'){
				sum = sum + (s[i][j] - '0')*quan[j];
				tag[i] = 1;
			}
			else{
				tag[i] = 0;
				m = 0;
				break;
			}
		}
		if (M[sum % 11] != s[i][17]){
			tag[i] = 0;
			m = 0;
		}
	}
	if (m != 0){
		printf("All passed");
		return 0;
	}
	for (int i = 0; i < n; i++){
		if (tag[i] ==0){
			printf("%s\n", s[i]);
		}
	}
	return 0;
}
