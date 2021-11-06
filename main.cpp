//已知二叉树前序、中序，求后序
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxn = 1e6 + 10;

struct node {
	char str;
	node *left;
	node *right;

	node() {
	}
};

int x = 0;

node *solve(string s1, string s2) {
	if (s2.length() == 1)    //到达根节点
	{
		node *point = new node();
		point->str = s2[0];
		point->left = NULL;
		point->right = NULL;
		//cout<<point->str<<" ";
		return point;
	}
	string x1, x2;
	int len = s2.length();
	int i;
	for (i = 0; i <= len; i++) {
		if (s1[x] != s2[i])
			x1 += s2[i];
		else
			break;
	}
	i++;
	for (; i < len; i++)
		x2 += s2[i];
	node *point = new node();
	point->left = NULL;
	point->right = NULL;
	point->str = s1[x];
	if (x1.length() != 0)          //构建左子树
	{
		x++;
		point->left = solve(s1, x1);
	}
	if (x2.length() != 0)         //构建右子树
	{
		x++;
		point->right = solve(s1, x2);
	}
	//cout<<point->str<<" ";
	return point;

}

void dfs(node *point) {

	if (point->left != NULL)
		dfs(point->left);
	if (point->right != NULL)
		dfs(point->right);
	printf("%c", point->str);
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	node *root = NULL;
	root = solve(s1, s2);
	dfs(root);
	printf("\n");
	return 0;
}
/*
GDAFEMHZ
ADEFGHMZ
*/