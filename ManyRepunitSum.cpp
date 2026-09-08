#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	vector<int> ans;
	
	long long int cf =0;
	for(int ctr=1;ctr<=arr[n-1];ctr++){
		auto it = lower_bound(arr.begin(),arr.end(),ctr);
		int cnt = arr.end()-it;
		cf+=cnt;
		ans.push_back(cf%10);
		cf = cf/10;
	}
	while(cf>0){
		ans.push_back(cf%10);
		cf = cf/10;
	}
	reverse(ans.begin(),ans.end());
	for(int s:ans) cout<<s;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}