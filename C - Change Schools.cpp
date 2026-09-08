#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#define ll unsigned long long int 
using namespace std;

void solve(){
    int N,K; cin >> N >> K;
    vector<int> cnt(K+1,0);
    
    for(int s=1;s<=N;s++){
        int cl; cin >> cl;
        cnt[cl]++;
    }
    
    int maxi=*max_element(cnt.begin(),cnt.end());
    int canjoin=0;
    
    for(int cl=1;cl<=K;cl++){
        if(cnt[cl]>=maxi-1){
            canjoin++;
        }
    }
    
    cout << canjoin << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}