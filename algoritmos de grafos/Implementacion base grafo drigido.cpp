#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > grp;
int main(){
	int n,m;
	cin>>n>>m;
	arb.resize(n);
	for( int i=0; i<m; i++){
		int x,y;
		cin>>x>>y;
		arb[x].push_back(y);
	}
}

