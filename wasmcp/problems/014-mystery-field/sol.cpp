#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, D;
    cin >> S;
    cin >> D;
    // S+D and S-D are always even (problem constraint); round gives exact int
    int L = (int)round((S + D) / 2.0);
    int W = (int)round((S - D) / 2.0);
    cout << (long long)L * W << endl;
    return 0;
}
