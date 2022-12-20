#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int t;
	cin>>t;
	int a[1000];
	for(int i=0; i<t;i++){
		int n;
		cin>>n;
		int mx, mn;
		for( int j=0; j<n;j++){
			cin>>a[j];
			if( j==0){
				mx=a[j];
				mn=a[j];
			}
			mn&=a[j];
			mx|=a[j];
		}
		cout<<(mx-(mn))<<endl;
	}
}
//cin>>
//cout<<