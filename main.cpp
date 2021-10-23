//20211023-1
//求√(n+√(n-1)+√(n-2)+√(n-i)+...+√(x+1))
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x, int n) {
	if (n == 1) {
		return sqrt(x + n);
	} else {
		return sqrt(n + f(x, n - 1));
	}

}

int main() {
	double a;
	int n;
	cin >> a >> n;
	cout << fixed << setprecision(2) << f(a, n);
	return 0;
}