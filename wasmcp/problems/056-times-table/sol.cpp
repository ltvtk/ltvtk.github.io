#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    for (int i = 1; i <= 10; i++) {
        cout << to_string(k) + " x " + to_string(i) + " = " + to_string(k * i) << endl;
    }
    return 0;
}
