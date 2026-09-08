#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
using namespace std;

void solve(){
	int N;
	cin>>N;
	int lt=0;int rt = N-1;
	vector<int> arr(N);
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	while(lt<N && arr[lt]==0) lt++;
	while(rt>0 && arr[rt]==0) rt--;
	if(lt<=rt){
		for(int i=lt+1;i<rt;i++){
			if(arr[i]==-1){
				arr[i]=0;
			}
		}
		arr[lt]=arr[rt]=1;
	}
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}