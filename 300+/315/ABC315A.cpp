#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    for(ll i=0; i<s.length(); i++){
        if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u'){
            cout << s[i];
        }
    }
    return 0;
}