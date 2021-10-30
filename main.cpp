//20211030-1
//n个小球故意放错
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
	int n, f[100];
	f[1] = 0;
	f[2] = 1;
	f[3] = 2;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
	}
	cout << f[n];
	return 0;
}