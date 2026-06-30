#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    // X is always odd so 9*X/2 ends in .5 — use double arithmetic
    double silver = 9.0 * X / 2;
    double gold   = silver + X;
    // cout << gold << silver prints as print(gold, silver) via transpiler → "71.5 58.5"
    cout << gold << silver << endl;
    return 0;
}
