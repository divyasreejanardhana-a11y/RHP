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
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		int ht,lt;
		cin>>ht>>lt;
		arr[i]=make_pair(ht,lt);
	}
	sort(arr.begin(),arr.end(),greater<>());
	int prevt =0;
	vector<int> ltarr , htarr;
	for(auto[ht,lt] : arr){
		if(lt>prevt){
			prevt = lt;
			ltarr.push_back(lt);
			htarr.push_back(ht);
		}
	}
	int Q;
	cin>>Q;
	while(Q--){
		int t;
		cin>>t;
		auto it = upper_bound(ltarr.begin(),ltarr.end(),t);
		int idx = it - ltarr.begin();
		cout<<htarr[idx]<<endl;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}