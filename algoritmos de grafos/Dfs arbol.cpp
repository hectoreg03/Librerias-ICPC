#include<bits/stdc++.h>
using namespace std;
const int mxn=1e6+10;
vector<vector<int> > arb;
bool pv[mxn];
void dfs(int ac){
	pv[ac]=true;
	for( int i=0; i<arb[ac].size(); i++){
		if(pv[arb[ac][i]]==false){
			dfs(arb[ac][i]);
		}
	}
	cout<<ac<<" ";
}
int main(){
	int n;
	cin>>n;
	arb.resize(n);
	for( int i=0; i<n-1; i++){
		int x,y;
		cin>>x>>y;
		arb[x].push_back(y);
	}
	//si asumimos que la raiz del arbol es el 0
	//entonces hacemos el dfs desde el nodo 0 y recorre el arbol completo
	//sino entonces podemos hacer el ciclo a continuacion
	for( int i=0; i<n; i++){
		if( pv[i]==false){
			dfs(i);
		}
	}
}

