#include<iostream>

using namespace std;

int main(){
	int m, n, a = 0;

	cin >> m >> n;
	
	if(m % 2 == 0) {
		m = m + 1;
	}
	
	for(int i = m ; i <= n; i += 2) {
		a = a + m;
		m += 2;
	}

	cout << a;
	
    return 0;
} 
