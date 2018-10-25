/*
Ì°ÐÄËã·¨
*/

#include<stdio.h>

int main()
{
	int i = 0, n = 0, a[10] = { 0 };
	char s[100];
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
		if (a[i] != 0 && n == 0 && i>0){
			s[n] = i + '0';
			a[i]--;
			n++;
		}
	}
	for (i = 0; i < 10; i++){
		while (a[i]>0){
			s[n] = i + '0';
			a[i]--;
			n++;
		}
	}
	s[n] = '\0';
	printf("%s", s);
	return 0;
}


