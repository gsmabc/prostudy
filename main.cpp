#include<iostream>
using namespace std;
int g[101][101];
int visited[101];
int n,e;
int a,b;
int sum=0;
void dfs(int cur) {
	cout << cur <<" ";
	sum++;
	if(sum==n)
		return;
	for(int i=1; i<=n; i++) {
		if(g[cur][i]==1&&visited[i]!=1) {
			visited[i]=1;
			dfs(i);
		}}}
int main(){
	cin>>n>>e;
	for(int i=1; i<=e; i++) {
		cin>>a>>b;
		g[a][b]=1;
		g[b][a]=1;
	}
	visited[1]=1;
	dfs(1);
	return 0;
}