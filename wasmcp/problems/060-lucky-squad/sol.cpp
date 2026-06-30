#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int r = k % 6;
    if (r == 1) {
        cout << "Red" << endl;
    } else if (r == 2 || r == 4) {
        cout << "Blue" << endl;
    } else if (r == 3) {
        cout << "Yellow" << endl;
    } else if (r == 5) {
        cout << "Purple" << endl;
    } else {
        cout << "Orange" << endl;
    }
    return 0;
}
