/*
Tip:����ת�� ��������ͨ�� +0.5 
*/ 

#include<stdio.h>

int main()
{
	int c1, c2, time, hour, min, sec;
	scanf("%d %d", &c1, &c2);
	time = (int)((c2 - c1)/100.0+0.5); //�������뼼��
	hour = time / 60 / 60;
	min = time / 60 % 60;
	sec = time % 60;
	printf("%02d:%02d:%02d\n", hour, min, sec);
	return 0;
}
