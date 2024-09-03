#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

ll findMoveCount(ll x, ll y, ll k){
    ll num=0;ll xCov=0;ll yCov=0;
    while(xCov<x || yCov<y){
        if(num%2==0){xCov+=min(k,x-xCov);}
        else{yCov+=min(k,y-yCov);}
        num++;
        if(x==xCov && y==yCov){return num;}
    }
}
void solution(int test){
    while(test--){
        ll x; ll y;ll k;
        cin >> x >> y >> k;
        ll ans = findMoveCount(x,y,k);
        print(ans);
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}