#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    int before_gap = (int)floor(C / (double)(B - 1)) * B;
    int original   = (int)floor(before_gap / (double)(A - 1)) * A;
    cout << original << endl;
    return 0;
}
