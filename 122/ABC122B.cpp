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
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

typedef long long int ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	string st;
	cin >> st;
	ll maxx = 0, cur = 0;
	for(ll i=0; st[i]; i++){
		if(st[i] == 'A' or st[i] == 'G' or st[i] == 'C' or st[i] == 'T')
			cur ++;
		else{
			maxx = max(maxx, cur);
			cur = 0;
		}
	}
	maxx = max(maxx, cur);
	cout << maxx;
	return 0;
}