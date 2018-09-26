#include<stdio.h>
#include<string.h>

int main()
{
	int i=0;
	char s[81][20];
	while (scanf("%s",s[i]) != EOF){
		i++;
	}
	
	for (i=i-1;i>0;i--){
		printf("%s ",s[i]);
	}
	printf("%s",s[0]);
	return 0;
}
