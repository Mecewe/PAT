#include<stdio.h>

int main()
{
	int n, score[100001] = { 0 }, no, grade, max_grade = 0, max_no = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &no, &grade);
		score[no] += grade;
	}
	for (int i = 1; i <= n; i++){
		if (max_grade < score[i]){
			max_grade = score[i];
			max_no = i;
		}
	}
	printf("%d %d\n", max_no, max_grade);
	return 0;
}
