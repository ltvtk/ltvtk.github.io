#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 2) {
        cout << 1 << endl;
    } else {
        long long a = 1, b = 1;
        for (int i = 0; i < N - 2; i++) {
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    return 0;
}
