/*
Tip:qsort()��ʹ���Լ� m*p����int�ķ�Χ��Ҫ���͵�ǿ��ת�� 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main()
{
	int n, p, head = 0, rail = 0,count=0, num[100000];
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++){
		scanf("%d",&num[i]);
	}
	qsort(num, n, sizeof(num[0]), cmp); //�������� 
	while (head < n){
		if (num[head] <= 1L*p*num[rail]){  //������ǿ��ת�� ��long)p*num[rail]
			count = head - rail + 1;
			head++;
		}
		else{
			if (head < rail){
				rail++;
			}
			else{
				head++;
			}
			
		}
	}
	printf("%d\n", count);
	return 0;
}
