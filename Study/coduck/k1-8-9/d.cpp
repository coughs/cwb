/*
题目描述
平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。
输入
输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
输出
输出也是一行，输出三角形的面积，精确到小数点后两位。
样例输入
0 0 4 0 0 3
样例输出
6.00
提示

假设在平面内，有一个三角形，边长分别为a、b、c，三角形的面积S可由以下公式求得：

 

而公式里的p为半周长（周长的一半）：


 


开方需要调用中的sqrt()函数，在程序开头引入cmath，即#include<cmath>
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

	double x1, y1, x2, y2, x3, y3,p,a,b,c,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	// 已经很接近了，只是p需要用a、b、c进行计算
	p=(x1*y1+x2*y2+x3*y3)/2;
	b=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	a=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(2)<<s;

	
	return 0;
}
