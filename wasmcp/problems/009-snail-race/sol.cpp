#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A;
    cin >> B;
    int num = A * B;
    int den = A + B;
    int g = __gcd(num, den);
    // GCD division is always exact; round() converts the float result back to int
    cout << round(num / (double)g) << round(den / (double)g) << endl;
    return 0;
}
