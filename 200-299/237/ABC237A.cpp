#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    cout << (n <= (1<<31)-1 and n >= -(1<<31) ? "Yes" : "No");
    return 0;
}