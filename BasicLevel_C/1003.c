#include<stdio.h> 
#include<string.h>


int answer(const char *s);

int main(){
	int n, i = 0;
	char s[10][100];
	int answer(const char *s);
	scanf("%d", &n);
	while (i<n){
		scanf("%s", &s[i]);
		i++;
	}
	for (i = 0; i<n; i++){
		if (answer(s[i])){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}


int answer(const char *s){
	int a = 1, countT=0, countP=0, count1, count2, count3;
	char *p1, *p2;
	char *c = (char*)malloc(strlen(s) + 1);
	strcpy(c, s);
	while (*s != '\0'){
		if (*s != 'P' && *s != 'A' && *s != 'T'){
			a = 0;
			break;
		}
		if (*s == 'P'){
			countP++;
			if (countP == 2){
				a = 0;
				break;
			}
		}
		if (*s == 'T'){
			countT++;
			if (countT == 2){
				a = 0;
				break;
			}
		}
		s++;
	}
	if (a){
		p1 = strchr(c,'P');
		p2 = strchr(c,'T');
		if ((p1 == NULL) || (p2 == NULL)){
			a = 0;
		}
		else if ((p1 - c)*(p2 - p1-1) != (strlen(c) - (p2 - c + 1))){
			a = 0;
		}
		else if ((p2 - p1 - 1) == 0){
			a = 0;
		}	
	}
	free(c);
	return(a);
}
