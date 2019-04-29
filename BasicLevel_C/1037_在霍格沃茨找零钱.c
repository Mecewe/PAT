#include<stdio.h>
#include<stdbool.h>

struct money
{
	int Knut;
	int Sickle;
	int Galleon;
}P,A,R;

int main(){
	bool tag = false;
	struct money RestMoney(struct money , struct money );
	scanf("%d.%d.%d %d.%d.%d", &P.Galleon, &P.Sickle, &P.Knut, &A.Galleon, &A.Sickle, &A.Knut);
	if ((A.Galleon < P.Galleon) || ((A.Galleon == P.Galleon) && (A.Sickle<P.Sickle)) || ((A.Galleon == P.Galleon) && (A.Sickle == P.Sickle) && (A.Knut < P.Knut))){
		tag = true;
	} 
	if (tag){
		R = RestMoney(P, A);
		printf("-");
	}
	else{
		R = RestMoney(A, P);
	}
	printf("%d.%d.%d\n", R.Galleon, R.Sickle, R.Knut);
	return 0;
}

struct money RestMoney(struct money A, struct money B){
	struct money R;
	if (A.Knut < B.Knut){
		A.Sickle--;
		A.Knut += 29;
	}
	R.Knut = A.Knut - B.Knut;
	if (A.Sickle < B.Sickle){
		A.Galleon--;
		A.Sickle += 17;
	}
	R.Sickle = A.Sickle -B.Sickle;
	R.Galleon = A.Galleon - B.Galleon;
	return R;
}
