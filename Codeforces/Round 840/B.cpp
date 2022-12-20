#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mxn=1e5+10;
int main(){
	int t;
	cin>>t;
	for( int i=0; i<t;i++){
		int n,k,x;
		cin>>n>>k;
		vector<pair<int,int> > mons;
		for( int j=0; j<n; j++){
			cin>>x;
			mons.push_back({x,0});
		}
		for( int j=0; j<n; j++){
			cin>>x;
			mons[j].second=x;
		}
		sort(mons.begin(),mons.end());
		int death=k;
		for( int j=n-2; j>=0;j--){
			mons[j].second=min(mons[j+1].second,mons[j].second);
		}
		for( int j=0; j<n&&k>0;j++){
			while(mons[j].first>death){
				k-=mons[j].second;
				death+=k;
				if (k<=0)
				break;
			}
		}
		if(k>0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}