#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll big(ll x,ll n,ll m){
    ll r = x%m;
    ll ans=1;
    while(n!=0){
        if(n%2==1)
            ans=(ans*r)%m;
        r=(r*r)%m;
        n/=2;
    }
    return ans;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll a,b,c;
    while(cin>>a>>b>>c){
        if(c!=1 && c!=0)
            cout<<big(a,b,c)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
