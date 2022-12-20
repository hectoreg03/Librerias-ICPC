#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mxn= 2e5+10;
int ar[mxn];
vector<pair<int,int>>block;
void precal(){
	lli a=0,v=(a*(a-1))/2;
	while(v<mxn){
		ar[v]=a;
		block.push_back({a,v});
		a++;
		v=(a*(a-1))/2;
	}
	for( int i=1;i<mxn;i++){
		for( int j=0; i+block[j].second< mxn&& j<block.size();j++){
			if(ar[i+block[j].second]>ar[i]+block[j].first){
				ar[i+block[j].second]=ar[i]+block[j].first;
			}
		}
	}
}
int main(){
	precal();
		int n;
		cin>>n;
		cout<<ar[n]<<" "<<((ar[n]*(ar[n]-1))/2);
	
}