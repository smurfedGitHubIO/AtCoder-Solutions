#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	map<string, ll> msl;
	cin >> n;
	for(ll i=0; i<n; i++){
		string x;
		cin >> x;
		if(msl[x] == 0){
			cout << x << "\n";
		}
		else{
			msl[x] += 1;
			cout << x << "(" << msl[x] << ")\n";
		}
	}
	return 0;
}