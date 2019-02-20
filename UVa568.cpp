


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[10];
ll lastdigits(int n){
    if(n<10)
        return a[n];
    ll tn =n;
    ll u = n%10;
    n=n/10;
    ll d=n%10;
    if(d%2==0)
        return (6*lastdigits(tn/5)*a[u]);
    else
        return (4*lastdigits(tn/5)*a[u]);

}
int main(){ ///    D[1] = 1, D[2] = 2, D(3) = 6, D(4) = 4, D(5) = 2,  D(6) = 2, D(7) = 4, D(8) = 2, D(9) = 8
      a[0] = 1,a[1]=1,a[2]=2,a[3]=6,a[4]=4,a[5]=2,a[6]=2,a[7]=4,a[8]=2,a[9]=8;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n){
        int x = lastdigits(n);
        int tn=n,c=0;
        while(tn){
            tn/=10;
            c++;
        }
        if(c==0 || c==1)
            cout<<"    ";
        else if(c==2)
            cout<<"   ";
        else if(c==3)
            cout<<"  ";
        else if(c==4)
            cout<<" ";
            cout<<n<<" -> "<<x%10<<endl;

    }

}
