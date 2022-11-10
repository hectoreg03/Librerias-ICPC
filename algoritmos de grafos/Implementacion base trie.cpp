#include<bits/stdc++.h>
using namespace std;
struct Nodo{
	string val;
	map<char,Nodo*> hijos;
	bool eow;
	Nodo(){
		val="";
		eow=false;
	}
};

void insert( string x, Nodo*ac){
	for( int i=0; i<x.size(); i++){
		if(ac->hijos.find(x[i]) == ac->hijos.end() ){
			ac->hijos[x[i]]=new Nodo();
			ac->hijos[x[i]]->val=ac->val+x[i];
		}
		ac=ac->hijos[x[i]];
		cout<<ac->val<<endl;
	}	
	ac->eow=true;
}
int main(){
	Nodo * raiz= new Nodo();
	int n;
	cin>>n;
	for( int i=0; i<n; i++){
		string x;
		cin>>x;
		insert(x, raiz);
	}
}
