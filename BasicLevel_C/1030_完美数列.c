/*
Tip:qsort()的使用以及 m*p大于int的范围需要类型的强制转换 
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
	qsort(num, n, sizeof(num[0]), cmp); //快速排序 
	while (head < n){
		if (num[head] <= 1L*p*num[rail]){  //或者用强制转换 （long)p*num[rail]
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
