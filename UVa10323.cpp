#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ll n;
    while(cin>>n){
        if(n>13)
            cout<<"Overflow!"<<endl;
        else if(n<8 && n>=0)
            cout<<"Underflow!"<<endl;
        else if(n<0){
            if(n%2==0)
                cout<<"Underflow!"<<endl;
            else
                cout<<"Overflow!"<<endl;
        }
        else
            cout<<fact(n)<<endl;
    }
}
