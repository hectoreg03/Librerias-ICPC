#include<bits/stdc++.h>
using namespace std;
const int mxn=1e6+10;
vector<vector<int> > grp;
bool pv[mxn];
vector<int> tpsort;
void dfs(int ac){
	pv[ac]=true;
	for( int i=0; i<grp[ac].size(); i++){
		if(pv[grp[ac][i]]==false){
			dfs(grp[ac][i]);
		}
	}
	tpsort.push_back(ac);
}
int main(){
	//Para funcionar correctamente se necesita un grafo dirigido
	//pueden existir multiples soluciones pero cumplien las condiciones de que cualquiero posicion no posee una posicion menor que cualquiera de sus ancestros
	int n,m;
	cin>>n>>m;
	grp.resize(n);
	for( int i=0; i<m; i++){
		int x,y;
		cin>>x>>y;
		grp[x].push_back(y);
	}
	for( int i=0; i<n; i++){
		if( pv[i]==false){
			dfs(i);
		}
	}
	for( int i=0; i<n; i++){
		cout<<tpsort[i]<<" ";
	}
}

