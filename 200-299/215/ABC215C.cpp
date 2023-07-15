#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	string s;
	ll n;
	cin >> s >> n;
	sort(begin(s), end(s));
	do{
		n--;
		if(n == 0)
			break;
	}while(next_permutation(begin(s),end(s)));
	cout << s;
	return 0;
}