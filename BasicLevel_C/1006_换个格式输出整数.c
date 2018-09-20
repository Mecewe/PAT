#include<stdio.h>

int main()
{
	int n,x,y,z,i;
	char s[30]="0",count='1';
	scanf("%d",&n);
	x = n/100;
	y = n/10%10;
	z = n%10;
	if (x !=0){
		for (i =0; i<x;i++)
		s[i]='B';
	}
	if (y !=0){
		for (i =x; i<x+y;i++)
		s[i]='S';
	}
	if (z !=0){
		for (i =x+y; i<x+y+z;i++){
			s[i]=count;
			count++;
		}
	}
	printf("%s",s);
	return 0;
}
