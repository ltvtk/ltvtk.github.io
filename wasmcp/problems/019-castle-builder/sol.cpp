#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, L, W, H;
    cin >> A;
    cin >> L;
    cin >> W;
    cin >> H;
    long long cube = A * A * A;
    long long box  = L * W * H;
    if (cube > box)      cout << "Cube" << cube << endl;
    else if (box > cube) cout << "Box" << box << endl;
    else                 cout << "Equal" << cube << endl;
    return 0;
}
