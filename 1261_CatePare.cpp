#include<iostream>
using namespace std;
int main(){
	int n, i = 0;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		if (n % 2 == 0) {
			i++;
		}
	}
	if (i > 0) {
		cout << i;
	}
	else {
		cout << "NU EXISTA";
	}
	


	return 0;
} 