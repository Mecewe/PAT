#include<stdio.h>

int main()
{
	int i, j, k, t, count = 0;
	int flag[10000] = {0};
	int n[100], a[100];
	scanf("%d", &k);
	for (i = 0; i < k; i++){
		scanf("%d", &n[i]);
		t = n[i];
		while (t != 1){
			if (t % 2 == 0){
				t = t / 2;
			}
			else{
				t = (3 * t + 1) / 2;
			}
			if (flag[t] == 1){
				break;
			}
			flag[t] = 1;
		}
	}
	for (i = 0; i < k; i++){
		if (flag[n[i]] == 0){
			a[count] = n[i];
			count++;
			
		}
	}
	for (i = 0; i < count - 1; i++){
		for (j = i; j < count; j++){
			if (a[i] < a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < count-1; i++){
		printf("%d ", a[i]);
	}
	printf("%d", a[count-1]);
	return 0;
}
