#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    int num12 = B + A;
    int den12 = A * B;
    int total_num = num12 * C + den12;
    int total_den = den12 * C;
    int num = total_den;
    int den = total_num;
    int g = __gcd(num, den);
    cout << round(num / (double)g) << round(den / (double)g) << endl;
    return 0;
}
