//n->10
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <iostream>

using namespace std;

int to_Ten(char sh[], int r) {
	int len = strlen(sh), n = 0;
	double sum = 0, k;
	for (int i = len - 1; i >= 0; i--) {
		if (sh[i] >= 'A')k = (sh[i] - '7') * pow(r * 1.0, n++);
		else k = (sh[i] - '0') * pow(r * 1.0, n++);
		sum += k;
	}
	printf("%.0lf\n", sum);
}

int main() {
	char a[1001];
	cin.getline(a, 1000);
	int n;
	cin >> n;
	to_Ten(a, n);
	return 0;
}