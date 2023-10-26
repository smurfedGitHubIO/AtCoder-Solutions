#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll n;
    cin >> n;
    pll A[n];
    for(ll i=0; i<n; i++){
        string s;
        cin >> s;
        ll cnt = 0;
        for(ll j=0; j<s.length(); j++){
            if(s[j] == 'o'){
                cnt++;
            }
        }
        A[i] = mp(cnt, i+1);
    }
    sort(A, A+n);
    for(ll i=n-1; i>=0; i--){
        cout << A[i].s << " ";
    }
    return 0;
}