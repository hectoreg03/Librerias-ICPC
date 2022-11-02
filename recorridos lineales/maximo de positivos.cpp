#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int maximo=-1;
	for( int i=0; i<n; i++){
		cin>>x;
		if(maximo==-1 || x >maximo)
			maximo = x;
	}
	cout<<"el maximo es:"<<maximo;
}
