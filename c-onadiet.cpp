#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#define ll unsigned long long int 
using namespace std;

void solve(){
	int n, m ;
	ll k;
	cin>>n>>m>>k;
	vector<int> arr(n);
	vector<bool> eaten(n,false);
	ll curr =0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(i>=m){
			if(eaten[i-m]){
				curr -= arr[i-m] ;
			}
		}
		if(arr[i]+curr<=k){
			cout<<"Yes"<<endl;
			curr+=arr[i];
			eaten[i]=true;
		}
		else{
			cout<<"No"<<endl;
		}
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