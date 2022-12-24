#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n,x;
cin>>n>>x;
vi a(n);
fo(i,0,n) cin>>a[i];
   int f2=0;
   int f1=1;
   int f=f1+f2;
   int flag=0;
   while(f<n){
   	f2=f1;
   	f1=f;
   	f=f1+f2;
   }
   int offset=-1;
   while(f>1){
   	int i=min(offset+f1,n-1);
   	if(a[i]<x){
   		f=f1;
   		f1=f2;
   		f2=f-f1;
   		offset=i;
   	}
   	else if(a[i]>x){
   		f=f2;
   		f1-=f2;
   		f2=f-f1;
   	}
   	else{
   		flag=1;
   		break;
   	}
   }
   if(flag==1) cout<<"element found";
   else if(f1 && a[offset+1]==x) cout<<"element found";
   else cout<<"element not found";
return 0;    
}
