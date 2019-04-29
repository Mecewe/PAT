/**
*Hash Table
*/
#include<stdio.h>

int main(){
	int n,k;
	int arr[100000] = { 0 };
	int hashMap[101] = { 0 };
	int searchNumList[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		hashMap[arr[i]]++;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++){
		scanf("%d", &searchNumList[i]);
		printf("%d", hashMap[searchNumList[i]]);
		if (i < k - 1){
			printf(" ");
		}
	}

	return 0;
}
