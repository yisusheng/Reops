#include<stdio.h>
#include<math.h>

int main(){
	float x;
	float result;
	printf("Enter x:");
	scanf("%f",&x);
	
	if(x<0){
		result=pow((1+x),2)+2*x+1/x;
	}
	else{
		result=sqrt(x);
	}
	
	printf("f(%.2f)=%.2f",x,result);
	
	return 0;
}

