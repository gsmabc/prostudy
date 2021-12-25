#include<iostream>
using namespace std;

int main() {
	int f[501], n;
	f[1] = 1, f[2] = 1;
	cin >> n;
	if (n < 3) cout << 1;
	else {
		for (int i = 3; i <= n; i++)
			f[i] = 3 * f[i - 1] + 2 * f[i - 2];
		cout << f[n];
	}
	return 0;
}