#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);
    map<string, int> msb;
    for(int i=0; i<3; i++){
        string s;
        cin >> s;
        msb[s] = 1;
    }
    cout << (msb["AHC"] == 0 ? "AHC" : (msb["ABC"] == 0 ? "ABC" : (msb["AGC"] == 0 ? "AGC" : "ARC")));
    return 0;
}
