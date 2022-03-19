#include<iostream>

using namespace std;
string q[101];
int f = 1, r = 1;

int main() {
	char ch;
	while (cin >> ch) {
		if (ch == 'B') {
			cin >> q[r];
			r++;
		} else {
			if (f != r) {
				cout << "-" << q[f] << endl;
				f++;
			} else {
				cout << "-None" << endl;
			}
		}
	}
	return 0;
}