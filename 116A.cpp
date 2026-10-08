#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int capacity = 0;
    int maxCapacity = 0;
    while(n--) {
        int exit , enter;
        cin >> exit >> enter;
        capacity = (capacity-exit) + enter;
        maxCapacity = max(maxCapacity,capacity);
    }
    cout << maxCapacity <<endl;
    return 0;
}