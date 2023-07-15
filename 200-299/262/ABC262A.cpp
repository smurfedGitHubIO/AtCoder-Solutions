#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	cout << x + (4-(x%4))%4;
	return 0;	
}