#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    int rate   = (int)floor(C / 9.0) * 7;
    int diff   = rate - A;
    int groups = (int)floor((B + D) / (double)diff);
    // Comma-separated output: use string concat so transpiler keeps the comma
    cout << to_string(groups * 7) + "," + to_string(groups * A + B) << endl;
    return 0;
}
