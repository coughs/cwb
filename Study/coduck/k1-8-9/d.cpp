#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

	double x1, y1, x2, y2, x3, y3,p,a,b,c,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	p=(x1*y1+x2*y2+x3*y3)/2;
	b=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	a=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(2)<<s;

	
	return 0;
}
