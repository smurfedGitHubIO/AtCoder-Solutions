#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll q;
    cin >> q;
    queue<ll> ql;
    priority_queue<ll, vector<ll>, greater<ll> > qpl;
    while(q--){
        ll n;
        cin >> n;
        if(n == 1){
            ll x;
            cin >> x;
            ql.push(x);
        }
        else if(n == 2){
            if(!qpl.empty()){
                cout << qpl.top() << "\n";
                qpl.pop();
            }
            else{
                cout << ql.front() << "\n";
                ql.pop();
            }
        }
        else{
            while(!ql.empty()){
                ll tp = ql.front();
                qpl.push(tp);
                ql.pop();
            }
        }
    }
    return 0;
}