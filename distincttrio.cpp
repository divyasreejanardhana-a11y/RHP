#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#define ll long long int
using namespace std;
//nlogn
void solve(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	ll ans =0;
	for(int i=1;i<n-1;i++){
		auto ub = upper_bound(arr.begin(),arr.end(),arr[i]);
		int highno = arr.end()-ub;
		auto lb = lower_bound(arr.begin(),arr.end(),arr[i]);
		int lowno = lb-arr.begin();
		ans+= 1LL*highno*lowno;
	}
	cout<<ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}