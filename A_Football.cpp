#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(){
    string s;cin >> s;ll cnt=1;ll n=s.size();
    for(1,n){
        if(s[i]==s[i-1]){cnt++;}
        else{cnt=1;}
        if(cnt>=7){print("YES");return;}
    }
    print("NO")

}
int main(){

    solution();
}