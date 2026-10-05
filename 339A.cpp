#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t;

    for(char c : s) {
        if(c != '+')
            t += c;
    }

    sort(t.begin(), t.end());

    for(int i = 0; i < t.size(); i++) {
        if(i > 0)
            cout << "+";

        cout << t[i];
    }

    return 0;
}