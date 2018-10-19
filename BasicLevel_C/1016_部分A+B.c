/*
注意强制类型转换char转为int，否则
导致stack around the variable was corrupted问题
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getP(char*, char);

int main()
{
	char a[11], b[11], da, db;
	int numda, numdb;
	scanf("%10s %c %10s %c", &a, &da, &b, &db);
	numda = getP(a, da);
	numdb = getP(b, db);
	printf("%d\n", numda + numdb);
	return 0;
}

int getP(char *a, char d){
	char *p,*temp;
	int i, number=0, count = 0;
	char *t = (char*)malloc(strlen(a) + 1);
	temp = t;
	strcpy(t, a);
	do{
		p = strchr(t, d);
		if (p){
			strcpy(t, p);
			count++;
			t++;
		}
	} while (p);
	for (i = 0; i < count; i++){
		number = number * 10 + (int)(d - 48);
	}
	free(temp);
	return number;
}
