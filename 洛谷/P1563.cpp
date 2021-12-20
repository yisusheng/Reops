#include<iostream>

#define MAX_ARRAY 100000
using namespace std;

struct People{
	int exposure;
	string name;
};

People people[MAX_ARRAY];

int main(){
	int n,m,result=0;
	cin >> n >> m;
	
	for(int i=0;i<n;i++)
	{
		cin >> people[i].exposure >> people[i].name;
		//cout << people[i].name;
	}
	
	for(int i=0;i<m;i++){
		int a,s,temp;
		cin>>a>>s;
		
		if(a){//向右数
			if(people[result].exposure){//朝外站
				temp=result-s;
			}
			else temp=result+s;//朝内站
		}
		else{//朝左数
			if(people[result].exposure){//朝外站
				temp=result+s;
			}
			else temp=result-s;//朝内站
		}
		
		if(temp<0) result=temp+n;
		else if(temp>n-1) result=temp-n;
		else result=temp;
		}
	cout<<people[result].name;
	return 0;
	}

