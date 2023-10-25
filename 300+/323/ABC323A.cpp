#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    for(ll i=0; i<16; i++){
        if(i&1 and s[i] == '1'){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}