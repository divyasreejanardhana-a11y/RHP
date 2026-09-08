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
	set<int> arr;
	while(n--){
		int c;
		cin>>c;
		arr.insert(c);
	}
	cout<<arr.size()<<endl;
	for(int s:arr){
		cout<<s<<" ";
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