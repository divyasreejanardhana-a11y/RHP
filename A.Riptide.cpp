#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
	 vector<int> arr(3);
	 for(int i=0;i<3;i++){
	 	cin>>arr[i];
	 }
	 sort(arr.begin(),arr.end());
	 for(int i=0;i<2;i++){
	 	if(arr[i]==arr[i+1]){
	 		cout<<"0"<<endl;
	 		return;
	 	}
	 }
	 cout<<min(arr[1]-arr[0],arr[2]-arr[1])<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}