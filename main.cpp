#include <bits\stdc++.h>

using namespace std;

int main() {
	int n = 0, a[1000005] = {}, b[1000005] = {}, total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		total += (min(a[i], b[i]));
	}
	cout << total;
}
//using namespace std; int a[100005],b[100005],n,total;
//int main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){ cin>>a[i]; } for(int i=1;i<=n;i++)cin>>b[i];
//	for(int i=1;i<=n;i++)total+=min(a[i],b[i]); cout<<total;
//}