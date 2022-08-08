#include <bits/stdc++.h>
using namespace std;

int xs[] = {-1, -1, 1, 1, 0, 0, -1, 1};
int ys[] = {-1, 1, 1, -1, -1, 1, 0, 0};

int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	string mx = "";
	char mt = '0';
	vector< pair<int, int> > chours[10];
	for(int i=0; i<n; i++){
		mx += '0';
		for(int j=0; j<n; j++){
			if(mt <= s[i][j]){
				mt = s[i][j];
				chours[mt-'0'].emplace_back(make_pair(i,j));
			}
		}
	}
	for(int b=0; b<chours[mt-'0'].size(); b++){
		int i=chours[mt-'0'][b].first, j=chours[mt-'0'][b].second;
		int q = n;
		string st = "";
		int x = i, y = j;
		for(int k=0; k<n; k++){
			while(q > 0){
				st += s[(x+n)%n][(y+n)%n];
				x += xs[k];
				y += ys[k];
				q--;
			}
			if(st >= mx)
				mx = st;
			st = "";
			x = i;
			y = j;
			q = n;
		}
	}
	cout << mx;
}