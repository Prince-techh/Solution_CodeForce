#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        int ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int left = 0;
        int right = n-1;
        while(left < right) {
            int sum =arr[left] + arr[right];
            if(sum == k) {
                ans++;
                left++;
                right--;
            }
            else if(sum < k) {
                left++;
            }
            else {
                right--;
            }
        }
        cout << ans << endl;
    }
    return 0;

}