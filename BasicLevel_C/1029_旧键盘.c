/*
tip:Õ∞≈≈–Ú 
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	int n, count = 0, a[27] = { 0 }, num[10] = { 0 };
	char cur1[81], cur2[81];
	scanf("%s %s", cur1, cur2);
	for (int i = 0; i < strlen(cur1); i++){
		if (cur1[i] != cur2[count]){
			if (cur1[i] >= 'a'&&cur1[i] <= 'z' && a[cur1[i] - 'a'] == 0){
				a[cur1[i] - 'a'] = 1;
				printf("%c", cur1[i]-32);
			}
			else if (cur1[i] >= 'A'&&cur1[i] <= 'Z'&& a[cur1[i] - 'A'] == 0){
				a[cur1[i] - 'A'] = 1;
				printf("%c", cur1[i]);
			}
			else if (cur1[i] >= '0'&&cur1[i] <= '9'&& num[cur1[i] - '0'] == 0){
				num[cur1[i] - '0'] = 1;
				printf("%c", cur1[i]);
			}
			else if (cur1[i] == '_' && a[26] == 0){
				a[26] = 1;
				printf("_");
			}
		}
		else{
			count++;
		}
	}
	printf("\n");
	return 0;
}
