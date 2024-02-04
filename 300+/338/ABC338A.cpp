#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    bool check = false;
    for(ll i=0; i<s.length(); i++){
        if(toupper(s[0]) == s[0]){
            check = 1;
        }
        else if(toupper(s[0]) != s[0]){
            check = false;
            break;
        }
        if(tolower(s[i]) == s[i] and i != 0){
            continue;
        }else if(tolower(s[i]) != s[i] and i != 0){
            check = false;
            break;
        }
    }
    cout << (check ? "Yes" : "No");
    return 0;
}