#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;
const ll MAXN = 2e5 + 11;

ll par[MAXN];
ll siz[MAXN];

void init(){
    for(ll i=0; i<MAXN; i++){
        par[i] = i;
        siz[i] = 1;
    }
}

ll find(ll x){
    if(x == par[x])
        return x;
    return par[x] = find(par[x]);
}

bool _union(ll a, ll b){
    ll pa = find(a);
    ll pb = find(b);
    if(pa != pb){
        if(siz[pa] > siz[pb])
            swap(pa, pb);
        par[pb] = pa;
        siz[pa] += siz[pb];
        return 1;
    }
    return false;
}

int main(){
    init();
    ll n, m;
    cin >> n >> m;
    pl p[m];
    ll x, y, cost;
    for(ll i=0; i<m; i++){
        cin >> x >> y >> cost;
        p[i] = make_pair(cost, make_pair(x, y));
    }
    ll ans = 0;
    sort(p, p+m);
    for(ll i=0; i<m; i++){
        if(!_union(p[i].s.f, p[i].s.s)){
            if(p[i].f >= 0){
                ans += p[i].f;
            }
        }
    }
    cout << ans;
    return 0;
}
