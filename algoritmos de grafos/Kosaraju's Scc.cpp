#include<bits/stdc++.h>
using namespace std;
const int mxn=1e6;
vector<vector<int> > grp;
vector<vector<int> > rev;
vector<int> toposort;
bool pv[mxn];
void tpsort( int a){
	pv[a]=true;
	for( int i=0; i<grp[a].size(); i++){
		if( pv[grp[a][i]]==false){
			tpsort(grp[a][i]);
		}
	}
	toposort.push_back(a);
}
void dfs( int ac){
	pv[ac]=true;
	cout<<ac<<" ";
	for( int i=0; i<rev[ac].size(); i++){
		if(pv[rev[ac][i]]==false){
			dfs(rev[ac][i]);
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int x,y;
	grp.resize(n);
	rev.resize(n);
	memset(pv,false,sizeof(pv));
	for( int i=0; i<m; i++){
		cin>>x>>y;
		grp[x].push_back(y);
		rev[y].push_back(x);
	}
	for( int i=0; i<n; i++){
		if( pv[i]==false){
			tpsort(i);
		}
	}
	memset(pv,false,sizeof(pv));
	int ans=0;
	cout<<"los componenetes fuertemente conexos son:"<<endl;
	for( int i=n-1; i>=0; i--){
		if( pv[toposort[i]]==false){
			dfs(toposort[i]);
			cout<<endl;
			ans++;
		}
	}
	cout<<"en total hay"<<ans<<"componentes";
}
