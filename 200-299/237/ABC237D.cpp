#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef struct centipede cent;

const ll MAXN = 5e5 + 11;

struct centipede{
    ll l, r;
};

cent A[MAXN+1];

int main(){
    ll n;
    string s;
    cin >> n >> s;
    ll curtop = 0;
    for(ll i=0; i<=n; i++){
        A[i].l = A[i].r = -1;
    }
    for(ll i=0; i<n; i++){
        if(s[i] == 'L'){
            if(curtop == i){
                curtop = i+1;
                A[i].l = i+1;
                A[i+1].r = i;
            }
            else{
                A[A[i].l].r = i+1;
                A[i+1].l = A[i].l;
                A[i+1].r = i;
                A[i].l = i+1;
            }
        }
        else{
            A[A[i].r].l = i+1;
            A[i+1].r = A[i].r;
            A[i+1].l = i;
            A[i].r = i+1;
        }
    }
    while(curtop != -1){
        cout << curtop << " ";
        curtop = A[curtop].r;
    }
    return 0;
}