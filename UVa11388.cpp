#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    while(n--){
        int G,L,c=1;
        cin>>G>>L;
        if(G==L)
        {
            cout<<G<<" "<<L<<endl;
            c=0;
            continue;
        }
        int xy=G*L;
        int x,y;
        for(int i=2*G; i<=xy; i+=G){
            if(xy%i==0){
               int g = gcd(i, xy/i);
               int l = (i*(xy/i))/g;
               if(g==G && l==L){
                c=0;
                cout<<g<<" "<<l<<endl;
                break;
               }
            }
        }
        if(c==1)
            cout<<-1<<endl;
    }
    return 0;
}
