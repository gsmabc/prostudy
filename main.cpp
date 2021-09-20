//(rand() % (b-a+1))+ a;
#include<iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

bool camp(double a, double b) {
	return a > b;
}

//性价比
int main() {
	double b[100];
	double n, x, y;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		b[i] = x * 1.0 / y;
	}
	sort(b, b + int(n), camp);
	for (int i = 0; i < n; ++i) {
		cout << fixed << setprecision(3) << b[i] << " ";
	}


	return 0;
}

