#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin >> p;
    if (p < 50) {
        cout << "White Belt" << endl;
    } else if (p < 100) {
        cout << "Blue Belt" << endl;
    } else {
        cout << "Black Belt" << endl;
    }
    return 0;
}
