#include<iostream>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;

    int totalCost = (w*(w+1)/2)*k;
    int borrow = totalCost - n;
    if(borrow>0) {
        cout<<borrow;
    } else {
        cout<<0;
    }
}