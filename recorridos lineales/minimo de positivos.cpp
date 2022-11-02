#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int minimo=-1;
	for( int i=0; i<n; i++){
		cin>>x;
		if(minimo==-1 || x <minimo)
			minimo = x;
	}
	cout<<"el minimo es:"<<minimo;
}
