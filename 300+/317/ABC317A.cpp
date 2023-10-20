#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll ,ll> pll;

int main(){
    ll n, x, b;
    cin >> n >> x >> b;
    pll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i].f;
        A[i].s = i+1;
    }
    sort(A, A+n);
    for(ll i=0; i<n; i++){
        if(A[i].f+x >= b){
            cout << A[i].s;
            return 0;
        }
    }
    return 0;
}