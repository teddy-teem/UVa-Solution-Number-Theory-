#include <bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a, a);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tn;
    cin>>tn;
    for(; ; ){
        string s;
        int c=-1;
        while(1)
        {
            vector<int> v;
           getline(cin,s);
           int n=0;
           for(int i=0; i<s.size(); i++){
                if(s[i]==' ')
                {
                    if(n!=0)
                        v.push_back(n);
                    n=0;
                }
                else
                    n=n*10+(s[i]-'0');
           }
           if(n!=0)
                v.push_back(n);
            //for(auto i:v) cout<<i<<" ";
            int m=0;
            if(v.size()==1){
                cout<<v[0]<<endl;
            }
            else if(v.size()>1){
                for(int j=0; j<v.size(); j++){
                    for(int k=j+1; k<v.size(); k++)
                        m = max(m,gcd(v[j], v[k]));
                }
                cout<<m<<endl;
            }
            //v.clear();
            c++;
            if((c)==tn) break;
      }
      if((c)==tn) break;
    }
    return 0;
}

