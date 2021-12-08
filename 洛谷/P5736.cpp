#include<iostream>

using namespace std;

int IsPrimeNum(int);

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int tem;
		cin >> tem;
		if(i!=n-1){
			if(IsPrimeNum(tem)){
				printf("%d ",tem);
			}
		}
		else{
			if(IsPrimeNum(tem)){
				printf("%d",tem);
			}
		}
		
	}
	return 0;
}

int IsPrimeNum(int num){
	if(num>2){
		for(int i=2;i<=num/2;i++){
			if(!(num%i)) return 0;
		}
		return 1;
	}
	else{
		if(num==2)
			return 1;
		else return 0;
	}
}
