/**
*Tip:16位数字 字符串后得加'\0' 
**/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	char id[17];
	int pos;
}StudentPos;

int main(){
	StudentPos s[1001];
	int n,m;
	char temp[17];
	int searchNum[1001] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		//char* temp = (char)malloc(17 * sizeof(char));
		int t;
		scanf("%s", temp);
		scanf("%d", &t);
		strcpy(s[t].id, temp);
		scanf("%d", &s[t].pos);
		//free(temp);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++){
		scanf("%d", &searchNum[i]);
		printf("%s %d\n", s[searchNum[i]].id, s[searchNum[i]].pos);
	}
	return 0;
}
