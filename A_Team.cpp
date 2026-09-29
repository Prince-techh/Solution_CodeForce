#include<iostream>
#include<vector>
using namespace std;
 int main () {
        int n, ans = 0;
        cin >> n;
        vector<vector<int>> v(n,vector<int>(3));

        for(int i = 0; i<n; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> v[i][j];
            }
        }

        for(int i=0; i < n; i++) {
            if(v[i][0]+v[i][1]+v[i][2] >= 2) {
                ans++;
            }
        }
        
        cout << ans << endl;

        return 0;
    
 }