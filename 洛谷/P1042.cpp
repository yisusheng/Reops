#include<iostream>
#include<cmath>

using namespace std;

int leftScore,rightScore=0;
char score[62500];

void init();
void OutPutIn11();
void OutPutIn21();
bool IsOverIn11();
bool IsOverIn21();

int main(){

	for(int i=0;i<62500&&(score[i]!='E');i++){
		cin>>score[i];
	}
	OutPutIn11();
	OutPutIn21();
	return 0;
}

void init(){
	leftScore=rightScore=0;
}
void OutPutIn11(){
	for(int i=0;i<62500;i++){
		while(score[i]=='E'){
			if(IsOverIn11()) printf("%d:%d\n\n",leftScore,rightScore);
			else printf("%d:%d\n\n",leftScore,rightScore);
			init();
			return;
		}
		while(IsOverIn11()){
			printf("%d:%d\n",leftScore,rightScore);
			init();
			break;
		}
		switch (score[i]) {
		case 'W':
			leftScore+=1;
			break;

		case 'L':
			rightScore+=1;
			break;

		default:
				break;
		}
	}
}

void OutPutIn21(){
	for(int i=0;i<62500;i++){
		while(score[i]=='E'){
			printf("%d:%d\n",leftScore,rightScore);
			init();
			return;
		}
		while(IsOverIn21()){
			printf("%d:%d\n",leftScore,rightScore);
			init();
			break;
		}
		switch (score[i]) {
		case 'W':
			leftScore+=1;
			break;

		case 'L':
			rightScore+=1;
			break;

			default:
				break;
		}
	}
}

bool IsOverIn11(){
	if(((leftScore+rightScore)<21)&&((leftScore==11)||(rightScore==11))) return true;
	else if(((leftScore+rightScore)>21)&&(abs(leftScore-rightScore)==2)) return true;
	else return false;
}

bool IsOverIn21(){
	if(((leftScore+rightScore)<41)&&((leftScore==21)||(rightScore==21))) return true;
	else if((leftScore>=20&&rightScore>=20)&&(abs(leftScore-rightScore)==2)) return true;
	else return false;
}
