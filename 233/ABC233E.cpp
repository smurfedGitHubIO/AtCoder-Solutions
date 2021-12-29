#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll n = s.length();
    ll sts = 0;
    for(ll i=0; i<n; i++){
        sts += s[i]-'0';
    }
    ll carry = 0;
    stack<char> st;
    string abc = "0123456789";
    for(ll i=n-1; i>=0; i--){
        carry += sts;
        sts -= s[i]-'0';
        st.push(abc[carry%10]);
        carry /= 10;
    }
    if(carry != 0){
        cout << carry;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}
