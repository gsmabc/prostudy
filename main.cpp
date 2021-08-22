#include<iostream>;
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[99][99];
	int count = 1;
	for (int i = 0; i < n / 2 + 1; i++) {
		// up
		for (int j = i; j < n - i; j++) {
			a[i][j] = count++;
		}
		// right
		for (int j = i + 1; j < n - i; j++) {
			a[j][n - i - 1] = count++;
		}
		// down
		for (int j = n - i - 2; j >= i; j--) {
			a[n - i - 1][j] = count++;
		}
		// left
		for (int j = n - i - 2; j > i; j--) {
			a[j][i] = count++;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - 1; ++j)
			cout << a[i][j] << " ";
		cout << a[i][n - 1] << endl;
	}
	return 0;
}
