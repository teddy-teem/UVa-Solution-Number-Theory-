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
        if(a==0)
            break;
        ll b = abs(a);
        primefactorization(b);
        ll c=0;
        if(a>0){
            cout<<a<<" = ";
            for(auto i:m){
                c++;
                for(int j=0; j<i.second; j++){
                    if(c>1)
                        cout<<" x ";
                   cout<<i.first;
                   c++;
                }
            }
            cout<<"\n";
        }
        else{
            c++;
            cout<<a<<" = -1";
            for(auto i:m){
                c++;
                for(int j=0; j<i.second; j++){
                    if(c>1)
                        cout<<" x ";
                   cout<<i.first;
                   c++;
                }
            }
            cout<<"\n";
        }
        m.clear();
    }

}
