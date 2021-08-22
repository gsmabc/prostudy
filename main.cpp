//反之矩阵
#include <iostream>
using namespace std;
int a[11][11];
int main() {
	int N, count = 1;
	cin >> N;
	for (int i = N - 1; i >= 0; i--) {
		if (i % 2 == 1) {
			for (int j = N - 1; j >= 0; j--) {
				a[i][j] = count++;

			}
		} else {
			for (int j = 0; j < N; ++j) {
				a[i][j] = count++;

			}
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << a[i][j] << " ";

		}
		cout << endl;
	}
	return 0;
}