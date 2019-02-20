
#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll, ll> m;
void primefactorization(ll n){
    while(n%2==0){
        m[2]++;
        n/=2;
    }
    ll i=3;
    while(i*i<=n){
        while(n%i==0){
            m[i]++;
            n/=i;
        }
        i+=2;
    }
    if(n>1)
        m[n]++;

}
int main(){
    ll a;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    while(cin>>a){
        if(a==0) break;
        primefactorization(a);
        if(a<=1) cout<<-1<<endl;
        else if(m.size()==1) cout<<-1<<endl;
        else{
            ll c=0;
            for(auto i:m){
                c=i.first;
            }
            cout<<c<<endl;
        }
        m.clear();
    }


}
