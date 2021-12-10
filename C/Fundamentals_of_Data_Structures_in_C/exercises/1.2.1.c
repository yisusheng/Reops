#include<stdio.h>

void Horner(char [],double);
char* InputPolynomail(char []);


int main(){
	
}

char* InputPolynomail(char polynomail[]){
	for(int i=0;;i++){
		int size=0;
		if(polynomail[i]=='\0') break ;
		else if(polynomail[i]=='+'||polynomail[i]=='-') size+=1;
		else continue;
	}
	int a[size];
}
