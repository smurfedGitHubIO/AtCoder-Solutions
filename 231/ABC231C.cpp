#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, q;
    cin >> n >> q;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    while(q--){
        ll x;
        cin >> x;
        ll lo=0, hi=n-1;
        while(lo < hi){
            ll mid = lo + ((hi-lo)>>1);
            if(A[mid] < x){
                lo = mid+1;
            }
            else{
                hi = mid;
            }
        }
        if(A[hi] < x){
            cout << "0\n";
        }
        else{
            cout << n-hi << "\n";
        }
    }
    return 0;
}
