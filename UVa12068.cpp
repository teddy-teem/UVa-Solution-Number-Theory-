#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(a==0) return b;
    return gcd( b%a, a);
}
ll lcm(ll a[], ll n){
    ll ans=a[0];
    for(ll i=1; i<n ; i++){
        ans=((a[i]*ans)/(gcd(a[i],ans)));
    }
    return ans;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin>>n;
    for(ll j=0; j<n; j++){
        ll a[10], b;
        memset(a,0,sizeof(a));
        cin>>b;
        for(ll i=0; i<b; i++) cin>>a[i];
        ll lb=lcm(a,b);
        ll ub=0;
        for(ll i=0; i<b; i++){
            ub+=(lb/a[i]);
        }
        ll upper=lb*b;
        ll u = gcd(ub,upper);
        upper = upper/u;
        ub = ub/u;
        cout<<"Case "<<j+1<<": "<<upper<<"/"<<ub<<endl;


    }
}
