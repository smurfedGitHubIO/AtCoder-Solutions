#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    cout << ((int)(n*1.08) < 206 ? "Yay!" : ((int)(n*1.08) == 206 ? "so-so" : ":("));
}
