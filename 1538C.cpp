#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans1 = 0, ans2 = 0;

        int left = 0, right = n - 1;

        // Count pairs with sum <= r
        while (left < right) {
            int sum = a[left] + a[right];

            if (sum <= r) {
                ans1 += right - left;
                left++;
            } else {
                right--;
            }
        }

        left = 0;
        right = n - 1;

        // Count pairs with sum < l
        while (left < right) {
            int sum = a[left] + a[right];

            if (sum < l) {
                ans2 += right - left;
                left++;
            } else {
                right--;
            }
        }

        cout << ans1 - ans2 << endl;
    }

    return 0;
}