
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int multiply(int s, int a[], int x);
ll factorial(int n){
    int a[100000];
    a[0]=1;
    int s=1;
    for(int i=2; i<=n; i++){
        s = multiply(s,a,i);
    }
    ll sum=0;
    for(int i=s-1; i>=0; i--) sum+=a[i];
    return sum;
}
int multiply(int s, int a[], int x){
    int carry = 0;
    for(int i=0; i<s; i++){
        int y = a[i]*x+carry;
        a[i]=y%10;
        carry = y/10;
    }
    while(carry){
        a[s] = carry%10;
        carry/=10;
        s++;
    }
    return s;
}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n){
        cout<<factorial(n)<<endl;
    }

}
