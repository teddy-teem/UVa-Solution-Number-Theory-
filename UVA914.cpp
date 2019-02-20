#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool a[1000020];
void sieve(){

    for(int i=3; i*i<=1000015; i++){
        if(a[i]==0){
            for(int j=i*i; j<=1000015; j+=2*i)
                a[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=1000015; i+=2)
    {
        if(a[i]==0)
            v.push_back(i);
    }

}
int main(){
    sieve();
    //cout<<v[v.size()-1];
    //for(auto i:v) cout<<i<<" ";
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    for(int j=0; j<n; j++){
        int l,r,k=0;
        int m[200];
        memset(m,0, sizeof(m));
        scanf("%d %d", &l, &r);
        for(int i=0; i<=v.size()-1; i++){
            if(v[i]>=l && v[i]<=r){
                if(v[i+1]>r)
                    break;
                m[v[i+1]-v[i]]++;
                k++;
                //cout<<v[i+1]<<"-"<<v[i]<<" = "<<v[i+1]-v[i]<<endl;
                //cout<<v[i]<<" ";
            }
        }
        int mx=0,ha,c=0;
        for(int i=0; i<200; i++){
            if(m[i]>1)
                c=1;
            if(m[i]>mx){
                ha=i;
                mx=m[i];
            }
            //cout<<i<<" ^ "<<m[i]<<endl;
        }
        int cnt=0;
        for(int i=0; i<200; i++){
            if(m[i]==mx)
                cnt++;
        }
        if(k==1)
            cout<<"The jumping champion is "<<ha<<endl;
        else if(cnt>1)
            cout<<"No jumping champion"<<endl;
        else if(c==1)
            cout<<"The jumping champion is "<<ha<<endl;
        else
            cout<<"No jumping champion"<<endl;
    }
}
