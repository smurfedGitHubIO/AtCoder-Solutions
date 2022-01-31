#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(string s, ll start, ll end){
    if(start >= end){
        return true;
    }
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    ll n = s.length(), r=s.length()-1, l = 0;
    while(r >= 0 and s[r] == 'a'){
        r--;
    }
    while(l < n and s[l] == 'a'){
        l++;
    }
    bool isP = check(s, l, r);
    cout << (isP and l+1 <= n-r ? "Yes" : "No");
    return 0;
}