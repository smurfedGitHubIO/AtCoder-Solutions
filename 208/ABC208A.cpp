#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll a, b;
    cin >> a >> b;
    cout << (b >= a and b <= a*6 ? "Yes" : "No");
    return 0;
}
