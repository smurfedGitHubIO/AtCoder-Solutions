#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    for(ll i=s.length()-1; i>=0; i--){
        if(s[i] == '0' or s[i] == '1' or s[i] == '8'){
            cout << s[i];
        }
        else{
            cout << (s[i] == '6' ? '9' : '6');
        }
    }
    return 0;
}