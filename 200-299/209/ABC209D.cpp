#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> v[n];
    ll x,y;
    for(ll i=0; i<n-1; i++){
        cin >> x >> y;
        --x, --y;
        v[x].emplace_back(y);
        v[y].emplace_back(x);
    }
    vector<ll> solo(n, 0);
    queue<pll> qpl;
    for(ll i=0; i<n; i++){
        if(v[i].size() == 1){
            qpl.push(make_pair(i,-1));
            solo[i] = -1;
            break;
        }
    }
    vector<bool> checked(n, false);
    while(!qpl.empty()){
        pll fr = qpl.front();
        qpl.pop();
        checked[fr.f] = 1;
        for(ll i=0; i<v[fr.f].size(); i++){
            if(!checked[v[fr.f][i]]){
                solo[v[fr.f][i]] = fr.s*-1;
                qpl.push(make_pair(v[fr.f][i],fr.s*-1));
            }
        }
    }
    while(q--){
        cin >> x >> y;
        --x , --y;
        cout << (solo[x] == solo[y] ? "Town\n" : "Road\n");
    }
    return 0;
}
