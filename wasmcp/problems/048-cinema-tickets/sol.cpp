#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cin >> h;
    if (h < 110) {
        cout << "FREE" << endl;
    } else if (h <= 130) {
        cout << "CHILD" << endl;
    } else {
        cout << "ADULT" << endl;
    }
    return 0;
}
