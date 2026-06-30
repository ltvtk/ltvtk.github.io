#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    int arm_eye_num = A + B;
    int arm_eye_den = A * B;
    int total_num   = arm_eye_num * C + D * arm_eye_den;
    int total_den   = arm_eye_den * C;
    int g = __gcd(total_den, total_num);
    // GCD division is exact; round() converts float result to int
    cout << round(total_den / (double)g) << round(total_num / (double)g) << endl;
    return 0;
}
