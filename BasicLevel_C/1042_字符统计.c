/**
*Tip:HashTable 
**/ 
#include<stdio.h>
#include<string.h>


int main(){
	char str[1001];
	int arr[128] = { 0 };
	int max = 0, maxPos = 0;
	gets(str);
	for (int i = 0; i < strlen(str); i++){
		if (str[i] >= 65 && str[i] <= 90){
			str[i] += 32;
		}
		arr[str[i]]++;

		if ((str[i] >= 97 && str[i] <= 122) && ((max < arr[str[i]]) || (max == arr[str[i]] && maxPos>str[i]))){
			max = arr[str[i]];
			maxPos = str[i];
		}
	}
	printf("%c %d\n", maxPos,max);
	return 0;
}
