#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct node {
    ll a, b, c, d;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    struct node A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i].a >> A[i].b >> A[i].c >> A[i].d;
    }
    ll cnt = 0;
    for(ll i=1; i<=102; i++){
        for(ll j=1; j<=102; j++){
            for(ll k=0; k<n; k++){
                if(i-1 >= A[k].a and i-1 <= A[k].b and i >= A[k].a and i <= A[k].b and j-1 >= A[k].c and j-1 <= A[k].d and j >= A[k].c and j <= A[k].d){
                    cnt += 1;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}