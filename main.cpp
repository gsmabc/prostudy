//20211030-2
//数塔
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n + 1][n + 1];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			cin >> a[i][j];
		}
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (a[i + 1][j] >= a[i + 1][j + 1]) {
				a[i][j] += a[i + 1][j];
			} else {
				a[i][j] += a[i + 1][j + 1];
			}

		}

	}
	cout << a[1][1];
	return 0;
}