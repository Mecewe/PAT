/*
*Tip:Hash Table(0,127) 
*/ 
#include<stdio.h>
#include<string.h>

int main(){
	int flag = 0, count1 = 0, count2 = 0;
	char sellChain[1000],needChain[1000];
	int hashMap[127] = { 0 };
	scanf("%s\n%s", sellChain,needChain);
	for (int i = 0; i < strlen(needChain); i++){
		hashMap[needChain[i]]--;
	}
	for (int i = 0; i < strlen(sellChain); i++){
		hashMap[sellChain[i]]++;
	}
	for (int i = 0; i < 127; i++){
		//printf("%d ", hashMap[i]);
		if (hashMap[i] <0){
			flag = 1;
			count1 += hashMap[i];
		}
		else if (hashMap[i] >0){
			count2 += hashMap[i];
		}
	}
	//printf("\n");
	if (flag){
		printf("No %d\n", -count1);
	}
	else
	{
		printf("Yes %d\n", count2);
	}
	return 0;
}


