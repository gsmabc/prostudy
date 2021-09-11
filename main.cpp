#include <iostream>
#include <string>

using namespace std;
//最近的车站
struct info {
	string name;
	double dis;
};

void min_dis(info a[], int n) {
	int m = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i].dis < a[m].dis)m = i;
	}
	cout << a[m].name << " " << a[m].dis << endl;
}

int main() {
	info a[11];
	int n;
	for (int i = 1; i <= 3; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			cin >> a[j].name >> a[j].dis;
		}
		min_dis(a, n);
	}
	return 0;
}