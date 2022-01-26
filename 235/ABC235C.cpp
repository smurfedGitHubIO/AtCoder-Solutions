#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mapper;
    vector<ll> v[n];
    ll cnt = 1, x;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(mapper[x] == 0){
            mapper[x] = cnt;
            v[cnt-1].emplace_back(i+1);
            cnt++;
        }
        else{
            v[mapper[x]-1].emplace_back(i+1);
        }
    }
    ll k;
    while(m--){
        cin >> x >> k;
        if(mapper[x] == 0 or v[mapper[x]-1].size() < k){
            cout << "-1\n";
        }
        else{
            cout << v[mapper[x]-1][k-1] << '\n';
        }
        
    }
    return 0;
}
