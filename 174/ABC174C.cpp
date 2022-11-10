#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll x;
    cin >> x;
    if (x%2 == 0 or x%5 == 0){
        cout << -1;
    } else {
        ll q = 1;
        ll cur = 0;
        bool check = false;
        while(q <= x){
            cur = cur*10+7;
            if (cur%x == 0) {
                check = true;
                break;
            }
            q += 1;
            cur = cur%x;
        }
        cout << (check ? q : -1);
    }
    return 0;
}