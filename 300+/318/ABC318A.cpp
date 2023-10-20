#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m, p;
    cin >> n >> m >> p;
    ll q=0, cnt = 0;
    for(ll i=1; i<=n ; i++){
        if(i == m+q*p){
            q ++;
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}