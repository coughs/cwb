//============================================================================
// Name        : class.cpp
// Author      : cwb
// Version     :
// Copyright   : Your copyright notice
// Description : coduck K1 class practice in C, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int a = 0;

	for(int i = 0; i < 5; i++) {
		cout << "���룺";
		cin >> a;

		cout << "�����";
		cout << "a = " << a << ", ";
		if((a < 0) || (a > 100)) {
			cout << "�������" << endl;
		}
		else {
			if(a < 60) {
				cout << "������" << endl;
			}
			else if(a < 70) {
				cout << "����" << endl;
			}
			else if(a < 90) {
				cout << "����" << endl;
			}
			else {
				cout << "����" << endl;
			}
		}
	}

	return 0;
}
