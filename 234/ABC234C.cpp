#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll x;
    cin >> x;
    string ans = "";
    while(x>0){
        if(x%2 == 0){
            ans = "0"+ans;
        }
        else{
            ans = "2"+ans;
        }
        x /= 2;
    }
    cout << ans;
    return 0;
}
