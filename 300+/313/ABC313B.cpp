#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> v[n];
    ll a,b;
    for(ll i=0; i<m; i++){
        cin >> a >> b;
        --a, --b;
        v[a].emplace_back(b);
    }
    ll ans = -1;
    for(ll i=0; i<n; i++){
        ll cnt = 0;
        vector<ll> vis(n, 0);
        stack<ll> stl;
        stl.push(i);
        while(!stl.empty()){
            ll tp = stl.top();
            stl.pop();
            if(vis[tp] == 0){
                vis[tp] = 1;
                for(ll j=0; j<v[tp].size(); j++){
                    if(vis[v[tp][j]] == 0){
                        cnt ++;
                        stl.push(v[tp][j]);
                    }
                }
            }
        }
        if(cnt == n-1){
            if(ans != -1){
                cout << -1;
                return 0;
            }
            ans = i;
        }
    }
    cout << (ans == -1 ? -1 : ans+1);
    return 0;
}