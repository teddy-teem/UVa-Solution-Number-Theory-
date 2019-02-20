
#include<bits/stdc++.h>
#define ll long long
ll gcd(ll a, ll b){
    if(a==0) return b;
    return gcd(b%a,a);
}
ll lcm(ll x, ll y){
    return (x*y)/gcd(x,y);
}
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        vector<ll> v;
        for(ll i=2; i*i<=n; i++)
        {
            if(n%i==0){
                v.push_back(i);
                if(i!=n/i)
                    v.push_back(n/i);
            }
        }
        ll c=0;
        //for(auto i:v) cout<<i<<" ";

        for(ll i=0; i<v.size(); i++){
            for(ll j=i; j<v.size(); j++){
                ll g = lcm(v[i], v[j]);
                if(g==n){
                    c++;
                   // cout<<v[i]<<" "<<v[j]<<endl;
                }

                //cout<<gcd(v[i],v[j])<<" ";

            }
            //cout<<endl;
        }
        if(n==1){
            cout<<n<<" "<<n<<endl;
            v.clear();
            continue;
        }
        v.push_back(1);
        v.push_back(n);
        //cout<<endl<<v.size()<<endl;

        cout<<n<<" "<<(v.size()+c)<<endl;
        v.clear();
    }
}
