#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int low = 0, high = 0, w = 0, ans = n;
        while(high < n) {
            if(s[high] == 'W') w++;
            
            if(high - low + 1 == k) {
                ans = min(ans, w);
                if(s[low] == 'W') w--;
                low++;
            }
            high++;
        }
        cout << ans << endl;    
    }
    return 0;
}