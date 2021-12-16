#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    map<string, int> s;
    string ans;
    int mx = 0;
    for(int i=0; i<x; i++){
        string k;
        cin >> k;
        s[k] += 1;
        if(mx < s[k]){
            mx = s[k];
            ans = k;
        }
    }
    cout << ans;
    return 0;
}
