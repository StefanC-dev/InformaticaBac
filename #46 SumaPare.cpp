#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int s = 0;
	for (int i = 2; i <= 2 * n; i = i + 2) {
		s = s + i;

	}
	cout << "Suma este " << s;

	return 0;
}