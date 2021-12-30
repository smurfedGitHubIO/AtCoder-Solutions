#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
const ll INF = 1e17;

void solve(){
    ll a,b, c;
    cin >> a >> b >> c;
    if(a > c and b > c){
        cout << a + b;
    }
    else if(b > a and c > a){
        cout << b + c;
    }
    else{
        cout << a + c;
    }
}

int main(){
    solve();
    return 0;
}
