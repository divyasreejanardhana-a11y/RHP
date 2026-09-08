#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#define ll long long int
using namespace std;
int find(vector<int> &ldr,int node){
		if(ldr[node]!=node){
			ldr[node] = find(ldr,ldr[node]);
		}
	return ldr[node];
}

void join(vector<int> &ldr,int rt, int lt){
	ldr[find(ldr,rt)]= find(ldr,lt);
}
	
void solve(){
	int N, E;
	cin>>N>>E;
	vector<int> ldr(N+1);
	for(int i=1;i<=N;i++){
		ldr[i]=i;
	}
	vector<pair<int,pair<int,int>>> edges;
	while(E--){
		int a,b,cost;
		cin>>a>>b>>cost;
		if(cost<=0){
			join(ldr,a,b);
		}
		else{
			edges.push_back(make_pair(cost,make_pair(a,b)));
		}
	}
	ll rewards =0;
	sort(edges.begin(),edges.end());
	for(auto[cost,p]:edges){
		int a = p.first;
		int b = p.second;
		if(find(ldr,a)!= find(ldr,b)){
			join (ldr,a,b);
		}
		else{
			rewards+=cost;
		}
	}
	cout<<rewards<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	while(t--){
		solve();
	}
}