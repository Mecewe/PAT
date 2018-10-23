/*
不解：
r = ((r * 10) + (a[i] - '0')) % b;
需改为
qi = ((r * 10) + (a[i] - '0'));
r = qi % b;

*/

#include<stdio.h>

int main()
{
	char a[1001], q[1001], *p = q;
	int b, qi = 0, r = 0, i = 0;
	scanf("%s %d", a, &b);
	while (a[i])
	{
		qi = (r * 10 + (a[i] - '0')) ;
		q[i] = qi/b + '0';
		r = qi % b;
		i++;
	}
	q[i] = '\0';
	if (q[0] == '0'&& q[1] != '\0'){
		p++;
	}
	printf("%s %d\n", p, r);
	return 0;
}

