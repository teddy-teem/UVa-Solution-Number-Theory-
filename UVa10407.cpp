

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a, a);
}
int fndgcd(int a[], int n){
    vector<int> v;
    for(int i=0; i<n-1; i++)
        if(abs(a[i+1]-a[i])!=0)
            v.push_back(abs(a[i+1]-a[i]));
    //for(auto i:v) cout<<i<<" ";
    if(v.size()==0)
        return 1;
    int r = v[0];
    for(int i=1; i<v.size(); i++)
         r = gcd(v[i], r);
    return r;
}
int main(){
    //for(auto i:v) cout<<i<<" ";
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int c=0;
    while(1)
    {
        int a[1005];
        memset(a,0,sizeof(a));
        int y=1,n=0;
        for(int i=0; ; i++)
        {
            cin>>a[i];
            n++;
            if(i==0 && a[i]==0){
                c=1;
                break;
            }
            if(a[i]==0){
                break;
            }
        }
        if(c==1)
            break;
        //for(int i=0; i<n; i++) cout<<a[i]<<" ";
        int ans = fndgcd(a,n-1);
        cout<<ans<<endl;
    }
}
