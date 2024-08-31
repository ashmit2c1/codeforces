#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(){
    ll n;cin >> n;vector<ll>arr;forloop(0,n){ll x;cin>>x;arr.push_back(x);}ll cnt=0;
    ll sum=0;forloop(0,n){sum+=arr[i];}
    ll prefix=0;;sort(arr.begin(),arr.end(),greater<int>());
    forloop(0,n){prefix+=arr[i];cnt++;if(prefix>(sum-prefix)){break;}}  
    print(cnt)
}
int main(){

    solution();
}