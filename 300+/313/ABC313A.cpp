#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll mx = 0, ind = -1;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        mx = max(mx, A[i]);
        if(mx == A[i]){
            ind = i;
        }
    }
    cout << abs(mx-A[0])+(ind != 0);
    return 0;
}
