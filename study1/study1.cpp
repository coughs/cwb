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
	int a = 0;

	for(int i = 0; i < 5; i++) {
		cout << "输入：";
		cin >> a;

		cout << "输出：";
		cout << "a = " << a << ", ";
		if((a < 0) || (a > 100)) {
			cout << "输入错误！" << endl;
		}
		else {
			if(a < 60) {
				cout << "不及格" << endl;
			}
			else if(a < 70) {
				cout << "及格" << endl;
			}
			else if(a < 90) {
				cout << "良好" << endl;
			}
			else {
				cout << "优秀" << endl;
			}
		}
	}

	return 0;
}
