#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<vector>
using namespace std;
#define ll long long int
void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> dp(n+1,0);
	int rem=0;
	map<int,int> m;
	m[0]=0;
	for(int i=1;i<=n;i++){
		int curr;
		cin>>curr;
		rem=(rem+curr)%k;
		if(m.find(rem)!=m.end()){
			int previdx=m[rem];
			dp[i]=max(dp[i-1],1+dp[previdx]);
		}
		else{
			dp[i]=dp[i-1];
		}
					m[rem]=i;
	}
	cout<<dp[n]<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc=1;
	while(tc--)
	solve();
}