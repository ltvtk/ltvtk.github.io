#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n < 2) {
        cout << "NO" << endl;
    } else {
        bool is_prime = true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
