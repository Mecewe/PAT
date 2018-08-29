#include<stdio.h> 

boolean answer(const char *s);

int main(){
	int n,i=0;
	char s[][100];
	boolean answer(const char *s);
	scanf("%d",&n);
	while(i<n){
		scanf("%s",&s[i]);
		i++;
	}
	for(int i=0;i<n;i++){
		if answer(s[i]){
		printf("YES");	
		}else{
		printf("NO");
		}
	}
} 


boolean answer(const char *s){
	while (*s != '\0'){
		if(*s="P"||*s="A"||*s="T"){
			s++;
			
		}
	}
	
	
	
}
