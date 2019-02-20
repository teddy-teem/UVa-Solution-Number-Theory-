
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum_of_divisors(ll n){
	ll sum = 1;
	for(ll k = 2; k * k <= n; ++k){
		int p = 1;
		while(n % k == 0){
			p = p * k + 1;
			n /= k;
		}
		sum *= p;
	}
	if(n > 1)
		sum *= 1 + n;
	return sum;
}
int main() {
     int n;
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     for(;;){
        cin>>n;
        if(n==0) break;
        else if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19 || n==23 || n==29 || n==31) {
            ll a = (pow(2,n-1)*(pow(2,n)-1));
            ll b=sum_of_divisors(a);
            ll ans=b/2;
            if(ans==a) cout<<"Perfect: "<<a<<"!\n";
            else cout<<"Given number is prime. But, NO perfect number is available.\n";
        }
        else
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
}
