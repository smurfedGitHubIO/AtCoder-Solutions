#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, char> plc;

const ll MOD = 998244353;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<plc> A(n, {-1,'a'});
    char a;
    ll b;
    ll left = 0, right = 0;
    for(ll i=0; i<m; i++){
        cin >> a >> b;
        --b;
        left += (a == 'L');
        right += (a == 'R');
        A[b] = {i+1,a};
    }
    left = 0;
    ll ans = 1;
    for(ll i=n-1; i>=0; i--){
        if(A[i].s == 'L'){
            left ++;
        }
        else if(A[i].s == 'R'){
            right --;
        }
        else{
            ans = (ans*(m-right-left))%MOD;
        }
    }
    cout << ans;
    return 0;
}
