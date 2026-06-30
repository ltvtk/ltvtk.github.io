#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long total = 0;
    long long digits = 1, start = 1;
    while (start <= N) {
        long long end = min(N, start * 10 - 1);
        total += (end - start + 1) * digits;
        start *= 10;
        digits++;
    }
    cout << total << endl;
    return 0;
}
