#include <bits/stdc++.h>
using namespace std;

int main() {
    int S;
    cin >> S;
    if (S % 2 == 1) cout << -1 << endl;
    else            cout << round(S / 2.0) << endl;
    return 0;
}
