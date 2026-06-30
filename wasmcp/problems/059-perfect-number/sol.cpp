#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    if (s == n) {
        cout << "Perfect" << endl;
    } else {
        cout << "Not Perfect" << endl;
    }
    return 0;
}
