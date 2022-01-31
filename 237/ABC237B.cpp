#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll h, w;
    cin >> h >> w;
    ll A[h][w];
    for(ll i=0; i<h; i++){
        for(ll j=0; j<w; j++){
            cin >> A[i][j];
        }
    }
    for(ll j=0; j<w; j++){
        for(ll i=0; i<h; i++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}