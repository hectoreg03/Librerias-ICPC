#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int maximo=-1;
	if(n>0)
		cin>>maximo;
	for( int i=1; i<n; i++){
		cin>>x;
		if( x >maximo)
			maximo = x;
	}
	cout<<"el maximo es:"<<maximo;
}
