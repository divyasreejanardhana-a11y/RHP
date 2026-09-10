#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

void solve(){
	ll x,y,k;
	cin>>x>>y>>k;
	ll ans=0,ctr=0;
	while(ctr<k){
		ll rem = (y+ctr)%(x+ctr);
		if(rem == y-x ) break;
		ans+=rem;
		ctr++;
	}
	if(k>ctr){
		ans+=(k-ctr)*(y-x);
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--)
	solve();
}