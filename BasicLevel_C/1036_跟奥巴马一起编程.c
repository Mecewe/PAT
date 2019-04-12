#include<stdio.h>

int main(){
	int num;
	char c;
	scanf("%d %c", &num, &c);
	for (int i = 0; i < (int)(num + 1) / 2; i++){
		for (int j = 0; j <num ; j++){
			if (i == 0 || i == (int)((num + 1) / 2-1)){
				printf("%c", c);
			}
			else if(j == 0|| j==num-1){
				printf("%c", c);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
