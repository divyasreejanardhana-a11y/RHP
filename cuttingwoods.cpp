#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
	int L,Q;
	cin>>L>>Q;
	set<int> st={0,L};
	//st.insert(0);
	//st.insert(L);
	while(Q--){
		int qt, l;
		cin>>qt>>l;
		if(qt == 1){
			st.insert(l);
		}
		else{
			auto it = st.lower_bound(l);
			cout<<*it-*(prev(it))<<endl;
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