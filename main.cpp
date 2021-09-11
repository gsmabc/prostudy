#include <iostream>
#include <string>

using namespace std;
//身高排序
struct student {
	int height;
	string name;
};

student max_Height(student a[], int n) {
	int max = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i].height > a[max].height) {
			max = i;
		}
	}
	return a[max];
}

int main() {
	int n;
	student a[101];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].name >> a[i].height;
	}
	student s = max_Height(a, n);
	cout << s.name << ' ' << s.height;
	return 0;
}