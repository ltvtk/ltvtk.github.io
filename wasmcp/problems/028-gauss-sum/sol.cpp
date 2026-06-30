#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    // N*(N+1) is always even, floor() keeps the transpiler path correct
    long long result = (long long)floor(N * (N + 1) / 2.0);
    cout << result << endl;
    return 0;
}
