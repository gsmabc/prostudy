#include<iostream>

using namespace std;
int n, m;
int vist[200], a[200];

void print() {
	for (int i = 1; i <= m; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void dfs(int x) {
	for (int i = 1; i <= n; i++) {
		if (i > a[x - 1] && !vist[i]) {
			vist[i] = 1;
			a[x] = i;
			if (x == m) {
				print();
			} else
				dfs(x + 1);
			vist[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs(1);
	return 0;
}