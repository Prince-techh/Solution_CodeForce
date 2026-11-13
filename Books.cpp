#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
        int n,t;
        cin >> n >> t;
        vector<int> books(n);
        for(int i = 0; i < n; i++) {
            cin >> books[i];
        }
        int low = 0 , high = 0, sum = 0, ans = 0;
        while(high < n) {
            sum += books[high];
            while(sum > t) {
                sum -= books[low];
                low++;
            }
            ans = max(ans, high-low+1);
            high++;
        }
        cout << ans << endl;
        return 0;
    }