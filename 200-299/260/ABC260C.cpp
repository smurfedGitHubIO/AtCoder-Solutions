#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll a, b, c;
	cin >> a >> b >> c;
	ll cnt = 0;
	vector<ll> red(11, 0);
	vector<ll> blue(11, 0);
	red[a] = 1;
	while(true){
		if(a == 1)
			break;
		if(cnt%2 == 0){
			blue[a] += b*red[a];
			red[a-1] += 1*red[a];
			red[a] = 0;
		}
		else{
			blue[a-1] += c*blue[a];
			red[a-1] += 1*blue[a];
			blue[a] = 0;
			a -= 1;
		}
		cnt += 1;
	}
	cout << blue[1];
	return 0;
}