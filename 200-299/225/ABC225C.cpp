#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	ll A[n][m];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	bool check = true;
	ll sx = (A[0][0]%7);
	ll cur = (A[0][0]-sx)/7 + 1;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			if(A[i][j] != (cur-1)*7+j+sx){
				check = false;
				break;
			}
			if(A[i][j]%7 == 0 and j != m-1){
				check = false;
				break;
			}
		}
		if(!check)
			break;
		cur += 1;
	}
	cout << (check and sx+m-1 <= 7? "Yes" : "No");
	return 0;
}