#include<iostream>

using namespace std;
int a[105][105];

int main() {
	int n, m, b, c, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			a[i][j] = 1;
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> b >> c;
		a[b][c] = 0;
		a[b + 1][c] = 0;
		a[b][c + 1] = 0;
		a[b + 1][c + 1] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == 1)
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}