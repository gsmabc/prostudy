#include<iostream>
#include <cstring>
//字符替换

using namespace std;

int main() {
	char s[201];
	char A, B;
	gets(s);
	cin >> A >> B;
	int n = strlen(s);
	for (int i = 0; i < n; ++i) {
		if (s[i] = A)
			cout << B;
		else
			cout << s[i];

	}
	cout << endl;
	return 0;
}
