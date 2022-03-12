#include <iostream>
#include <cstring>

using namespace std;
char a[101], s[101];
int len, i;
int top = 0;

void push(char x) {
	if (top < 100) {
		top++;
		s[top] = x;
		return;
	}
}

void pop() {
	if (top > 0) {
		top--;
	}
}

char getTop() {
	return s[top];
}

int main() {
	cin >> a;
	len = strlen(a);
	for (i = 0; i < len; i++) {
		if (a[i] == '[') {
			if (getTop() != '(') {
				push(a[i]);
			} else {
				cout << "NO";
				return 0;
			}
		} else if (a[i] == '(') {
			push(a[i]);
		} else if (a[i] == ')' && s[top] == '(') {
			pop();
		} else if (a[i] == ']' && s[top] == '[') {
			pop();
		} else {
			cout << "NO";
			return 0;
		}
	}
	if (top == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}