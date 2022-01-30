#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);
    ll n;
    string st = "";
    cin >> n;
    while(n != 1){
        if(n%2 == 0){
            st = 'B' + st;
            n /= 2;
        }
        else{
            st = 'A' + st;
            n -= 1;
        }
    }
    cout << "A" + st;
    return 0;
}
