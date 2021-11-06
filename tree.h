/*usage:
//#include "tree.h"
// cnt=0;
//root=0;
//root = buildTree(0);
//inorder(root);
//cout << endl;
//postorder(root);
return 0;
*/
// Created by fc on 2021/11/6.
//


#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H

#include <iostream>

using namespace std;
struct node {
	char value;
	int left, right;
} data[101];
int root = 0, cnt;
char ch;

//建立二叉树
int buildTree(int bt) {
	cin >> ch;
	if (ch == '.') {
		bt = 0;
		return bt;
	} else {
		bt = ++cnt;
		data[bt].value = ch;
		data[bt].left = data[bt].right = 0;
		data[bt].left = buildTree(bt);
		data[bt].right = buildTree(bt);
	}
	return bt;
}

void inorder(int bt) {
	if (bt) {
		inorder(data[bt].left);
		cout << data[bt].value;
		inorder(data[bt].right);
	}
}

//后序遍历
void postorder(int bt) {
	if (bt) {
		postorder(data[bt].left);
		postorder(data[bt].right);
		cout << data[bt].value;
	}
}

int main() {
	root = 0;
	cnt = 0;
	root = buildTree(0);
	inorder(root);
	cout << endl;
	postorder(root);
	return 0;
}

#endif //UNTITLED_TREE_H
