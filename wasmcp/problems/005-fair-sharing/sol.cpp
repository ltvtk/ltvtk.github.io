#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M;
    cin >> N;
    // floor() gives correct integer quotient via transpiler (C++ / vs Python /)
    int q = (int)floor(M / (double)N);
    int r = M % N;
    cout << q << r << endl;
    return 0;
}
