/*
Tip:
strcmp()������,���Ƚϳ��Ȳ�ͬ���Һ���Ϊǰ���Ӽ����� >0 . 
memcpy()�����ã�ͨ���ڴ��ַ��void *memcpy(void *dest, const void *src, size_t n);
*/
#include<stdio.h>
#include<string.h>

int main()
{
	int n,count=0;
	char cur[17], eldest[17] = { '9' }, youngest[17] = { '0' };
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%s %s", cur + 11, cur);
		if (strcmp(cur, "1814/09/06") >= 0 && strcmp(cur, "2014/09/06") <= 0){
			count++;
			if (strcmp(cur, eldest) <= 0){
				memcpy(eldest, cur, 17);
			}
			if (strcmp(cur, youngest) >= 0){
				memcpy(youngest, cur, 17);
			}
		}
	}
	if (count){
		printf("%d %s %s\n", count, eldest + 11, youngest + 11);
	}
	else{
		printf("0");
	}
	
	return 0;
}
