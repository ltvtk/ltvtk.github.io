#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a < 24) {
        cout << "Newborn" << endl;
    } else if (a < 72) {
        cout << "Preschool" << endl;
    } else if (a <= 144) {
        cout << "School" << endl;
    } else {
        cout << "Teen" << endl;
    }
    return 0;
}
