/*
题目描述
找出三个整数中的最大数和最小数，求最大数和最小数之间的差值
输入
输入仅一行，输入3个正整数（取值范围小于108）
输出
输出为一行，最大数和最小数的差值
样例输入
1 5 9
样例输出
8
*/

#include<iostream>
using namespace std;
int main(){
//int
	int a,b,c,d,e,f;
	cin>>a>>b>>c;

	// 分层比较，
	// a大于b时，
	// 		b大于c则a-c；a小于c则c-b；否则a-b。
	// a小于b时，
	// 		b于c则；a于c则；否则。
//a
	if(a>b&&a>c){
	d=1;
	}

//b	
	else if(b>a&&b>c){
	e=1;
	}

//c	
	else if(c>a&&c>b){
	f=1;
	}

//取值 
	if(a>b&&a>c&&c>b){
	cout<<a-b;
	}
	if(a>b&&a>c&&b>c){
	cout<<a-c;
	}
	if(a>b&&a>c&&c>b){
	cout<<a-b;
	}
	if(b>a&&b>c&&a>c){
	cout<<b-c;
	}
	if(b>a&&b>c&&c>a){
	cout<<b-a;
	}
	if(c>b&&c>a&&a>b){
	cout<<c-b;
	}
	if(c>b&&c>a&&b>a){
	cout<<c-a;
	}

	return 0;
}
