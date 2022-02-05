#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <array>
#include <string>
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	ll n, m, k;
	cin >> n >> m >> k;
	for(ll i=min(n, m), j=0; i >= 0; i--){
		if(n%i == 0 and m%i == 0){
			j++;
			if(k == j){
				cout << i;
				break;
			}
		}
	}
	return 0;
}