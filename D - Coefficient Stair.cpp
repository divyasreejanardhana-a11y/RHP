#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<array>
#include<queue>
using namespace std;
using combo=array<int,10>;
#define ll unsigned long long int
vector<combo> ans;
void dfs(int slot,int bal,combo arr){
	if(slot==1){
		arr[slot-1]=bal;
		ans.push_back(arr);
		return;
	}
	arr[slot-1]=0;
	while(bal>=0){
		dfs(slot-1,bal,arr);
		arr[slot-1]++;
		bal-=slot;
	}
}
void solve(){
	int n,k;
	cin>>n>>k;
	combo arr;
	dfs(n,k,arr);
	sort(ans.begin(),ans.end());
	for(combo c:ans){
		for(int i=0;i<n;i++){
			cout<<c[i]<<(i+1==n?"\n":" ");
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc=1;
	while(tc--)
	solve();
}
