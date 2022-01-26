#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll f(ll x){
    return x*x+2*x+3;
}

int main(){
    ll x;
    cin >> x;
    cout << f(f(f(x)+x)+f(f(x)));
    return 0;
}
