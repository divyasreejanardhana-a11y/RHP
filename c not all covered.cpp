#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
	int m,n;
	cin>>n>>m;
	vector<int> psum(n+2);
	while(m--){
		int l,r;
		cin>>l>>r;
		psum[l]++;
		psum[r+1]--;
	}
	int minv = 200001;
	for(int i=1;i<=n;i++){
		psum[i]+=psum[i-1];
		minv=min(minv,psum[i]);
	}
	cout<<minv<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}