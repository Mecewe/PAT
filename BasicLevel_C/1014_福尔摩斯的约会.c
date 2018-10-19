#include<stdio.h>

int main()
{
	char s[4][60], i,n=0,s1,s2;
	int count1,count2,count3;
	for (i = 0; i < 4; i++){
		scanf("%s", &s[i]);
	}
	for (i = 0; i < 60; i++){
		
		if (s[0][i] == s[1][i] && s[0][i] <= 'G'&& s[0][i] >= 'A'&& n == 0){
			n++;
			count1 = s[0][i];
		}
		else if (s[0][i] == s[1][i] && ((s[0][i] <= 'N'&& s[0][i] >= 'A') || (s[0][i] <= '9'&& s[0][i] >= '0') && n == 1)){
			count2 = s[0][i];
			break;
		}
	}
	for (i = 0; i < 60; i++){
		if (s[2][i] == s[3][i] && ((s[2][i] <= 'z' && s[2][i] >= 'a') || (s[2][i] <= 'Z' && s[2][i] >= 'A'))){
			count3 = i;
			break;
		}
	}
	switch (count1)
	{
	case 'A': printf("MON ");
		break;
	case 'B':printf("TUE ");
		break;
	case 'C':printf("WED ");
		break;
	case 'D':printf("THU ");
		break;
	case 'E':printf("FRI ");
		break;
	case 'F':printf("SAT ");
		break;
	default:printf("SUN ");
		break;
	}
	if (count2 <= 78 && count2 >= 65){
		count2 = count2 - 55;
	}
	else if (count2 <= 57 && count2 >= 48){
		count2 = count2 - 48;
	}
	if (count2 < 10){
		printf("0");
	}
	printf("%d:", count2);
	if (count3 < 10){
		printf("0");
	}
	printf("%d", count3);
	return 0;
}

