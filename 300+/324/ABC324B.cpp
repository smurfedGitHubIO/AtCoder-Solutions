#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll q = 1;
    for(ll i=0; i<33; i++){
        if(n%(1LL<<i) == 0){
            ll m = n/(1LL<<i);
            while(m % 3 == 0){
                m /= 3;
            }
            if(m == 1){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}