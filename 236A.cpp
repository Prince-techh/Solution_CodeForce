#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<char> st;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        st.insert(s[i]);
    }

    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}