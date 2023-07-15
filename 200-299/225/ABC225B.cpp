#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll x;
	cin >> x;
	bool check = true;
	ll a, b;
	ll c, d, same;
	cin >> a >> b;
	for(ll i=1; i<x; i++){
		cin >> c >> d;
		if(i == 1){
			if(c == a or d == a)
				same = a;
			else
				same = b;
		}
		else{
			if(c != same and d != same){
				check = false;
				break;
			}
		}
	}
	cout << (check ? "Yes" : "No");
	return 0;
}