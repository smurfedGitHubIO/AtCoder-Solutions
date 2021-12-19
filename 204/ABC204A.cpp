#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll x ,y;
	cin >> x >> y;
	if(x == y){
		cout << x;
	}
	else{
		cout << 3 -x-y;
	}
	return 0;
}