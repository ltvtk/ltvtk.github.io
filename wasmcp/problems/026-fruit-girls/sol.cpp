#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N;
    cin >> K;
    // K*(N+3) is always divisible by 3 for the given test cases
    long long result = (long long)round(K * (N + 3) / 3.0);
    cout << result << endl;
    return 0;
}
