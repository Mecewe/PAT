/*
	����scanf("%s", &n[1001]);�����ֱ���corrupted
	��Ϊscanf("%s", n);����
*/

#include<stdio.h>

int main()
{
	int i=0, a[10] = { 0 };
	char n[1001],*p=n;
	scanf("%s", n);
	while(*p !='\0'){
		a[(int)(*p - '0')]++;
		p++;
	}
	for (i = 0; i < 10; i++){
		if (a[i] != 0){
			printf("%d:%d\n", i, a[i]);
		}
	}
	return 0;
}
