//============================================================================
// Name        : web.cpp
// Author      : cwb
// Version     :
// Copyright   : Your copyright notice
// Description : coduck K1 web practice in C, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
//	int a = 0;

	for(int i = 0; i < 5; i++) {
		int a,b;
		cin>>a;
		if(a-5<=0){
			a-5;
			b=2;
		}
		else if(a-10<=0){
			a-5;
			b=3;
		}
		else if(a-17<=0){
			a-5;
			b=4;
		}
		else if(a-27<=0){
			a-5;
			b=5;
		}
		else if(a-38<=0){
			a-5;
			b=6;
		}
		cout<<b;
	}

	return 0;
}
