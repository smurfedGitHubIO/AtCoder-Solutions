#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b;
	cin >> a >> b;
	if(b%a == 0 and b >= a){
		cout << a+b;
	}
	else{
		cout << b-a;
	}
	return 0;
}