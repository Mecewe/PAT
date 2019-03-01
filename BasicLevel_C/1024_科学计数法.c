/*
直接输出，从而节约大量时间  
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

char p[2]={}; 

//为了满足strcat() 使字符转化为字符串 
char* change_to_String(char c){
	p[0]=c;
	p[1]='\0';
	return p;
} 

int main()
{
	int a=1,x=0,i,tag1=1,tag2=1,pointPos=2,ePos=0;
	double b=0,sum;
	char s[20000]={},s1[20000]={};
	scanf("%s",s);
	if (s[0]=='-'){
		tag1 = -1;
		strcat(s1,change_to_String('-'));
		printf("%c",'-');
	}
	for(i=3;i<strlen(s);i++){
		if(s[i] == 'E'){
			ePos=i;
			break;
		}
	}
	if (s[++i] == '-'){
		tag2 = -1;
	}
	for (++i;i<strlen(s);i++){
		x=(s[i]-'0')+10*x;
	}
	x=x*tag2;
	if (x<0){
//		strcat(s1,"0.");
		printf("%s","0.");
		i=abs(x)-1;
		while(i--){
//			strcat(s1,change_to_String('0'));
			printf("%c",'0');
		}
//		strcat(s1,change_to_String(s[1]));
		printf("%c",s[1]);
		for(i=3;i<ePos;i++){
//			strcat(s1,change_to_String(s[i]));
			printf("%c",s[i]);
		}
	}else if(x<ePos-3){
//		strcat(s1,change_to_String(s[1]));
		printf("%c",s[1]);
		i=3;
		while(x--){
//			strcat(s1,change_to_String(s[i++]));
			printf("%c",s[i++]);
		}
//		strcat(s1,change_to_String('.'));
		printf("%c",'.');
		while(i<ePos){
//			strcat(s1,change_to_String(s[i++]));
			printf("%c",s[i++]);
		}
	}else{
//		strcat(s1,change_to_String(s[1]));
		printf("%c",s[1]);
		for(i=3;i<ePos;i++){
//			strcat(s1,change_to_String(s[i]));
			printf("%c",s[i]);
		}
		i=x-(ePos-pointPos-1);
		while(i--){
//			strcat(s1,change_to_String('0'));
			printf("%c",'0');
		}
	}
	
//	printf("%s\n",s1);
	return 0;
} 
