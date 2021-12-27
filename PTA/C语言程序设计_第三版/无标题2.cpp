#include<stdio.h>

int main(){
	int deno,flag,i,n;
	double item,sum;
	
	printf("enter n:");
	scanf("%d",&n);
	deno=1;
	item=1;
	sum=0;
	
	for(i=1;i<=n;i++){
		sum=sum+item;
		deno=deno+2;
		item=flag*1.0/deno;
		//TODO
	}
	
	printf("sum=%f\n",sum);
	return 0;
}
