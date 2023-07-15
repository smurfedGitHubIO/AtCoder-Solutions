#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<pll, ll> pl;

bool safe(ll i, ll j, ll n, ll m){
    return i >= 0 and j >= 0 and i <n and j < m;
}

int main(){
    ll n, m;
    cin >> n >> m;
    char table[n][m];
    ll ans[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ans[i][j] = 0;
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> table[i][j];
        }
    }
    ll mx = 0;
    queue< pl > ql;
    ql.push({{0,0},1});
    while(!ql.empty()){
        pl fr = ql.front();
        ql.pop();
        mx = max(mx, fr.s);
        if(safe(fr.f.f+1,fr.f.s,n,m) and table[fr.f.f+1][fr.f.s] != '#' and ans[fr.f.f+1][fr.f.s] < fr.s+1){
            ql.push({{fr.f.f+1,fr.f.s},fr.s+1});
            ans[fr.f.f+1][fr.f.s] = fr.s+1;
        }
        if(safe(fr.f.f,fr.f.s+1,n,m) and table[fr.f.f][fr.f.s+1] != '#' and ans[fr.f.f][fr.f.s+1] < fr.s+1){
            ql.push({{fr.f.f,fr.f.s+1},fr.s+1});
            ans[fr.f.f][fr.f.s+1] = fr.s+1;
        }
    }
    cout << mx;
    return 0;
}
