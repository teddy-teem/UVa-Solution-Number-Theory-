
///11029 UVa problem......

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll get_p(ll n, ll m){
    if(m==0)
        return 1;
    if(m==1)
        return n%1000;
    else if(m%2==0){
        ll b = (get_p(n,m/2))%1000;
        return (b%1000*b%1000)%1000;
    }
    else
    {
        return (get_p(n,m-1)%1000*n%1000)%1000;
    }
}
ll get_f(ll n, ll m){
    double x,y;
    x=m*log10(n);
    y=floor(pow(10,x-floor(x)+3-1));
    return (ll)y;
}
int main(){
    ios;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll t,c=1;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll f = get_f(n,m);
        ll res=get_p(n,m);
        printf("Case %d: ",c++);
        printf("%lld %03lld\n",f,res);
    }
}
