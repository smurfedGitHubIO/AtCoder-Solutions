#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll func(ll x){
    return (x*(x+1))/2;
}

int main(){
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    map<ll, ll> cnt;
    priority_queue<ll, vector<ll>, less<ll> > pq;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        cnt[x] += 1;
        if(cnt[x] == 1){
            pq.push(x);
        }
    }
    while(!pq.empty() and k != 0){
        ll tp = pq.top();
        pq.pop();
        if(pq.empty()){
            if(k >= cnt[tp]*(tp)){
                k -= cnt[tp]*(tp);
                ans += (func(tp))*cnt[tp];
            }
            else{
                ll q = k/cnt[tp];
                ll r = k%cnt[tp];
                ans += cnt[tp]*(func(tp)-func(tp-q)) + r*(tp-q);
                k = 0;
            }
        }
        else{
            ll nx = pq.top();
            if(k >= cnt[tp]*(tp-nx)){
                k -= cnt[tp]*(tp-nx);
                ans += (func(tp)-func(nx))*cnt[tp];
                cnt[nx] += cnt[tp];
            }
            else{
                ll q = k/cnt[tp];
                ll r = k%cnt[tp];
                k = 0;
                ans += cnt[tp]*(func(tp)-func(tp-q)) + r*(tp-q);
            }
        }
    }
    cout << ans;
    return 0;
}