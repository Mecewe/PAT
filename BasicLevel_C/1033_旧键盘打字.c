/*
Tip:��������������Լ��ٿռ�ռ�� 
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char broke_key, text;
	int tag[126] = { 0 };
	//gets(broke_key);//���ո�
	while ((broke_key=getchar() )!= '\n'){
		if (broke_key >= 'A' && broke_key <= 'Z'){
			tag[broke_key] = 1;
			tag[broke_key+32] = 1;
		}
		else{
			tag[broke_key] = 1;
		}
	}
	while ((text = getchar()) != '\n'){
		if (tag[text] == 0){
			if (tag['+'] == 1 && (text<= 'Z'&&text>= 'A')){
				continue;
			}
			else
			{
				printf("%c", text);
			}
		}
	}
	printf("\n");
	return 0;
}
