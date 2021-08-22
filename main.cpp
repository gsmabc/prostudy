#include<iostream>
//成绩排序

using namespace std;

struct Student {
	int soc[11];
	int sum;
	int count;
};

bool px(Student a, Student b) {
	if (a.sum > b.sum) {
		return true;
	} else {
		return false;
	}
}

int add(Student a, int M) {
	a.sum = 0;
	for (int i = 0; i < M; i++) {
		a.sum += a.soc[i];
	}
}

int main() {
	int n, m, score, sum, ans, max = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= m; j++) {
			cin >> score;
			sum += score;

		}
		if (sum > max) {
			max = sum;
			ans = i;

		}
	}
	cout << ans << " " << max;
	return 0;
}
