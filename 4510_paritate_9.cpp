#include<iostream>;
using namespace std
int main() {
	int n, m;
	cin >> n >> m;
	int nu, nz, mu, mz;
	nu = n % 10;
	nz = n / 10;
	mu = m % 10;
	mz = m / 10;
	//if ((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1))  
	if(n % 2 == m % 2){
		int s = nu + nz + mu + mz;
		cout << s;
	}
	else {
		int p = nu * nz * mu * mz;
		cout << p;
	}


	return 0;
}