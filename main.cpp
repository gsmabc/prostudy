#include<iostream>

using namespace std;
int g[101][101];

int main() {
	int a, b, n, m;
	cin >> n >> m;
	for (int k = 1; k <= m; k++) {
		cin >> a >> b;
		g[a][b] = 1;
		g[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << g[i][j];
		}
		cout << endl;
	}
	return 0;
}