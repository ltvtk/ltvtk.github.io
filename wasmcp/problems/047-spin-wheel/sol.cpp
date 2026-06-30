#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int r = k % 3;
    if (r == 1) {
        cout << "Red" << endl;
    } else if (r == 2) {
        cout << "Blue" << endl;
    } else {
        cout << "Yellow" << endl;
    }
    return 0;
}
