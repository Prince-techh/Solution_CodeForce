#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s.find("++")!=string::npos) {
            X++;
        }
        else {
            X--;
        }
    }
    cout << X << endl;
    return 0;
}