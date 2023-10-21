#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    for(ll i=1; i<s.length(); i++){
        if((s[i]-'0') >= (s[i-1]-'0')){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}