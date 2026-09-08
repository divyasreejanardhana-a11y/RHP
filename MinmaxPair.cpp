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
	int samecnt=0, exchcnt =0;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==i){
			samecnt++;
		}
		else if(i == a[a[i]]){
			exchcnt++;
		}
	}
	cout<<(exchcnt)/2+ 1LL*samecnt*(samecnt-1)/2<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}