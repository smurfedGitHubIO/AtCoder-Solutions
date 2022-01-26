#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll mx = 0;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(i > 0 and A[i] <= A[i-1]){
            cout << A[i-1];
            return 0;
        }
    }
    cout << A[n-1];
    return 0;
}
