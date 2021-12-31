#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll a[10];
    for(ll i=0; i<10; i++){
        if(i == 0){
            a[i] = 1;
        }
        else{
            a[i] = a[i-1]*(i+1);
        }
    }
    ll x;
    cin >> x;
    ll ans = 0;
    for(ll i=9; i>=0 ;i--){
        ans += x/a[i];
        x -= (x/a[i])*a[i];
    }
    cout << ans;
    return 0;
}
