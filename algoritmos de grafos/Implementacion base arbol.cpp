#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > arb;
int main(){
	int n;
	cin>>n;
	arb.resize(n);
	for( int i=0; i<n-1; i++){
		int x,y;
		cin>>x>>y;
		arb[x].push_back(y);
	}
}

