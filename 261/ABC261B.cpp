#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	char s[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> s[i][j];
		}
	}
	bool check = true;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(s[i][j] == 'D' and s[j][i] != 'D')
				check = 0;
			if(s[i][j] != 'D' and s[j][i] == 'D')
				check = 0;
			if(s[i][j] == 'W' and s[j][i] != 'L')
				check = 0;
			if(s[i][j] == 'L' and s[j][i] != 'W')
				check = 0;
		}
	}
	cout << (check ? "correct" : "incorrect");
	return 0;
}