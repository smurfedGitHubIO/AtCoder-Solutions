#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	ll diff=c+a-2*b;
	if(diff<0){
		cout << abs(diff);
	}
	else{
		if(diff&1){
			cout << (diff+1)/2 + 1;
		}
		else{
			cout << diff/2;
		}
	}
	return 0;
}