/** 
*Tip:foucus on 'A' 
**/ 

#include<stdio.h>

int main(){
	int numP = 0, numT = 0, num = 0;
	long sum = 0;
	char c, str[100001];
	while ((c = getchar()) != '\n'){
		str[num++] = c;
		if (c == 'T'){
			numT++;
		}
	}
	for (int i = 0; i < num; i++){
		if (str[i] == 'P'){
			numP++;
		}
		else if (str[i] == 'T'){
			numT--;
		}
		else{
			sum += numP*numT;
		}
	}
	printf("%d\n", sum % 1000000007);
	return 0;
}


