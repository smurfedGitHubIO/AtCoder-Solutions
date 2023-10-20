#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> A[n];
    vector<ll> ans;
    ll x;
    ll b;
    vector<ll> B[37];
    for(ll i=0; i<n; i++){
        cin >> x;
        for(ll j=0; j<x; j++){
            cin >> b;
            A[i].emplace_back(b);
            B[b].emplace_back(x);
        }
    }
    for(ll i=0; i<37; i++){
        sort(begin(B[i]), end(B[i]));
    }
    cin >> x;
    for(ll i=0; i<n; i++){
        bool check = false;
        for(ll j=0; j<A[i].size(); j++){
            if(A[i][j] == x){
                check = true;
                break;
            }
        }
        if(check and B[x][0] == A[i].size()){
            ans.emplace_back(i+1);
        }
    }
    cout << ans.size() << "\n";
    for(ll i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}