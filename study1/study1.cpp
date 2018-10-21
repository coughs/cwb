//============================================================================
// Name        : study1.cpp
// Author      : cwb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int a;
	for(;;){
		cin>>a;
		if(a<60){
			cout<<"不及格";
		}
		else if(a>=60&&a<70){
			cout<<"及格";
		}
		else if(a>=70&&a<90){
			cout<<"良好";
		}
		else if(a>=90){
			cout<<"优秀";
		}
	}

	return 0;
}
