#include<bits/stdc++.h>
#define ll long long
using namespace std;
int multiply(int s, int a[], int x);
int m[10];
void factorial(int n){
    int a[100000];
    a[0]=1;
    int s=1;
    memset(m,0,sizeof(m));
    for(int i=2; i<=n; i++){
        s = multiply(s,a,i);
    }
    for(int i=s-1; i>=0; i--){
        m[a[i]]++;
    }
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
int cnt(int n){
    int c=0;
    while(n)
    {
        c++;
        n/=10;
    }
    return c;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    while(cin>>n){
        if(n==0) break;
        factorial(n);
        cout<<n<<"! --\n";
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",m[0],m[1],m[2],m[3],m[4]);
         printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",m[5], m[6], m[7], m[8], m[9]);
        //cout<<"   (0) "<<m[0]<<" (1) "<<m[1]<<" (2) "<<m[2]<<" (3) "<<m[3]<<" (4) "<<m[4]<<endl;
        //cout<<"   (5) "<<m[5]<<" (6) "<<m[6]<<" (7) "<<m[7]<<" (8) "<<m[8]<<" (9) "<<m[9]<<endl;
    }
}
