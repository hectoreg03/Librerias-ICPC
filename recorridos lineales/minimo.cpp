#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int minimo=-1;
	if(n>0)
		cin>>minimo;
	for( int i=1; i<n; i++){
		cin>>x;
		if( x <minimo)
			minimo = x;
	}
	cout<<"el minimo es:"<<minimo;
}
