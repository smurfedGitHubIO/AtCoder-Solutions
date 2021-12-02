#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, t;
	cin >> s >> t;
	int ans = 0;
	for(int i=s; i>=0; i--){
		for(int j=s-i; j >= 0; j--){
			for(int k=s-i-j; k>=0; k--){
				if(i*j*k <= t){
					ans += k+1;
					break;
				}
			}
		}
	}
	cout << ans;
	return 0;
}