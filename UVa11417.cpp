#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
        if(a==0) return b;
        return gcd(b%a, a);
}
int main()
{
    int n;
    while(cin>>n)
    {
        ll g=0;
        if(n==0) break;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
