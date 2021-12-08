#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

struct Point{
	double x;
	double y;
};
double dis(Point,Point);
double perimeter(double,double,double);


int main(){
	Point p1,p2,p3;
	cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
	printf("%.2f",perimeter(dis(p1,p2),dis(p2,p3),dis(p1,p3)));
	return 0;
}

double dis(Point p1,Point p2){
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
double perimeter(double dis1,double dis2,double dis3){
	return dis1+dis2+dis3;
}
