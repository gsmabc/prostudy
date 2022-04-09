#include<iostream>
#include<algorithm>

using namespace std;
struct things {
	string name;
	double weight;
};

bool cmp(things a, things b) {
	return a.weight < b.weight;
}

int main() {
	things w1[101];
	int c, n;
	cin >> c >> n;
	for (int i = 0; i < n; i++)
		cin >> w1[i].name >> w1[i].weight;
	sort(w1, w1 + n, cmp);
	int sum = 0, count = 0;
	for (int i = 0; i < n; i++) {
		sum += w1[i].weight;
		if (sum <= c) {
			count++;
		} else
			break;
	}
	for (int i = 0; i < count; i++)
		cout << w1[i].name << " ";
	return 0;
}