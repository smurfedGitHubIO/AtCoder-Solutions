#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, char> plc;

const ll MOD = 998244353;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll B[n];
    map<ll, bool> alive;
    set<ll> stl;
    set<ll> a;
    set<ll> b;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        alive[A[i]] = true;
        a.insert(A[i]);
    }
    for(ll i=0; i<n; i++){
        cin >> B[i];
        b.insert(B[i]);
    }
    vector<ll> betterA;
    vector<ll> betterB;
    for(auto x : a){
        betterA.emplace_back(x);
        stl.insert(x);
    }
    for(auto x : b){
        betterB.emplace_back(x);
    }
    vector<ll> vans;
    // for(ll i=0; i<n; i++){
    //     ll sor = (A[0]^B[i]);
    //     if(sor > 0){
    //         bool checker = true;
    //         for(ll j=0; j<n; j++){
    //             if(!alive[sor^B[j]]){
    //                 checker = false;
    //                 break;
    //             }
    //         }
    //         if(checker and sor > 0){
    //             vans.emplace_back(sor);
    //         }
    //     }
    // }
    for(ll i=0; i<betterA.size(); i++){
        ll sor = (betterA[0]^betterB[i]);
        if(sor > 0){
            bool checker = true;
            for(ll j=0; j<betterB.size(); j++){
                if(stl.find(sor^betterB[j]) == stl.end()){
                    checker = false;
                    break;
                }
            }
            if(checker){
                vans.emplace_back(sor);
            }
        }
    }
    sort(begin(vans), end(vans));
    cout << vans.size() << "\n";
    for(ll i=0; i<vans.size(); i++){
        cout << vans[i] << "\n";
    }
    return 0;
}
