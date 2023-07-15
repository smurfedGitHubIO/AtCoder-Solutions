#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 2e5 + 11;

vector<ll> f(MAXN+1, -1);
vector<ll> s(MAXN+1, -1);
vector<ll> ind(MAXN, -1);
vector<ll> tap(MAXN+1, -1);
vector<ll> A[MAXN];

int main(){
    ll n,m;
    cin >> n >> m;
    ll x, inp, cnt=2*n;
    stack<ll> stl;
    for(ll i=0; i<m; i++){
        cin >> x;
        ind[i] = x-1;
        for(ll j=0; j<x; j++){
            cin >> inp;
            A[i].emplace_back(inp);
        }
        if(f[A[i][x-1]] == -1){
            f[A[i][x-1]] = i;
            tap[A[i][x-1]] = 1;
        }
        else{
            s[A[i][x-1]] = i;
            tap[A[i][x-1]] = 2;
            stl.push(A[i][x-1]);
        }
    }
    while(!stl.empty()){
        ll tp = stl.top();
        stl.pop();
        cnt -= 2;
        tap[tp] = -1;
        if(ind[f[tp]] > 0){
            ind[f[tp]] -= 1;
            tap[A[f[tp]][ind[f[tp]]]] += 1;
            if(f[A[f[tp]][ind[f[tp]]]] == -1){
                f[A[f[tp]][ind[f[tp]]]] = f[tp];
            }
            else{
                s[A[f[tp]][ind[f[tp]]]] = f[tp];
                stl.push(A[f[tp]][ind[f[tp]]]);
            }
        }
        if(ind[s[tp]] > 0){
            ind[s[tp]] -= 1;
            tap[A[s[tp]][ind[s[tp]]]] += 1;
            if(f[A[s[tp]][ind[s[tp]]]] == -1){
                f[A[s[tp]][ind[s[tp]]]] = s[tp];
            }
            else{
                s[A[s[tp]][ind[s[tp]]]] = s[tp];
                stl.push(A[s[tp]][ind[s[tp]]]);
            }
        }
    }
    cout << (cnt == 0 ? "Yes" : "No");
    return 0;
}