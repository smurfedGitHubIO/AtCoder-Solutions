#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    bool check = true;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(i != 0 and A[i] != A[0]){
            check = false;
        }
    }
    cout << (check ? "Yes" : "No");
    return 0;
}