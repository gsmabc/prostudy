#include<iostream>
//鲜花速递

using namespace std;

int main() {
	int n, m, c = 0;
	cin >> n >> m;
	if (n < 5 * m) {
		cout << "NO";
		return 1;
	}
	for (int i = 0; i <= m; ++i) {
		for (int j = 0; j <= m - i; ++j) {
			if (i * 5 + j * 6 + (m - i - j) * 7 <= n) {
				c += 1;
			}
		}
	}
	cout << c;
	return 0;
}
