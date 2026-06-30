#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    if (t < 15) {
        cout << "Wear Jacket" << endl;
    } else if (t <= 25) {
        cout << "Wear Sweater" << endl;
    } else {
        cout << "Wear T-Shirt" << endl;
    }
    return 0;
}
