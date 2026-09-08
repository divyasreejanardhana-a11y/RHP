#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int diff[5] = {0,-1,0,1,0};
void dfs(int R, int C, int row, int col,vector<vector<char>> &g ){
	g[row][col]='#';
	for(int i=0;i<4;i++){
		int ar = row+diff[i];
		int ac = col+diff[i+1];
		if(ar>=0 && ac>=0 && ar<R && ac<C && g[ar][ac]=='.'){
			dfs(R,C,ar,ac,g);
		}
	}
}
void solve(){
	int R,C;
	cin>>R>>C;
	int numroom=0;
	vector<vector<char>> g(R,vector<char>(C));
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>g[i][j];
		}
	}
	for(int row=0;row<R;row++){
		for(int col=0;col<C;col++){
			if(g[row][col]=='.'){
				numroom++;
				dfs(R,C,row,col,g);
			}
		}
	}
	cout<<numroom<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t=1;
	while(t--){
		solve();
	}
}