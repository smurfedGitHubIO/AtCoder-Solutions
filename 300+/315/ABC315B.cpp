#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll m;
    cin >> m;
    ll d[m];
    ll cnt = 0;
    for(ll i=0; i<m; i++){
        cin >> d[i];
        cnt += d[i];
    }
    ll md = (cnt>>1) +1;
    for(ll i=0; i<m; i++){
        if(md <= d[i]){
            cout << i+1 << " " << md;
            break;
        }else{
            md -= d[i];
        }
    }
    return 0;
}