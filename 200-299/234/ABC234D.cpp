#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long int ll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> os;

int main(){
    os X;
    ll n, k;
    cin >> n >> k;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(i < k){
            X.insert(-A[i]);
        }
    }
    cout << *X.find_by_order(k-1)*-1 << "\n";
    for(ll i=k; i<n; i++){
        X.insert(-A[i]);
        cout << *X.find_by_order(k-1)*-1 << "\n";
    }
    return 0;
}
