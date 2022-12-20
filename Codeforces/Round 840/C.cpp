#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int t;
	cin>>t;
	for( int i=0; i<t;i++){
		lli n,x,mx=0, ans;
		cin>>n;
		lli ar[3];
		
		for( int j=0;j<n;j++){
				cin>>x;
				mx=max(mx,x);
				if(j<3)ar[j]=x;
		}
		if(n>=4)ans=n*mx;
		else{
			if(n==2)ans=max(ar[0]+ar[1],2*abs(ar[0]-ar[1]));
			else{
				ans=max(ar[0]*3,ar[2]*3);
				mx=max(ar[0]+ar[1]+ar[2],max((mx-ar[0])*3,(mx-ar[2])*3));
				ans=max(mx,ans);
				
			}
		}
				cout<<ans<<endl;
	}
}