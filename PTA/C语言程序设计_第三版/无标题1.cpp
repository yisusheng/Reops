#include<stdio.h>

double fact(int);

int main(){
	int n;
	float sum=1.0;
	float eps=1.0;
	printf("Enter n:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		eps=(2*i-1)/fact(i);
		if(eps<=1e-4) break;
		sum+=eps;
	}

	printf("%.3f",sum);

	return 0;
}

double fact(int n){
	int fact_value=1;
	for(int i=1;i<=n;i++){
		fact_value*=i;
	}
	return fact_value;
}
