#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    pair<int, int> p[] = {{1,2}, {2,3}, {4,5}, (5,6), (7,8), (8,9)};
    for(int i=0; i<6; i++){
        if(a == p[i].first and b == p[i].second){
            cout << "Yes\n";
            return 0;
        }
        if(b == p[i].first and a == p[i].second){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}