#include <bits/stdc++.h>
using namespace std;

int main() {
    int Ta, Tb;
    cin >> Ta;
    cin >> Tb;
    int num = Ta * Tb;
    int den = Ta + Tb;
    int g = __gcd(num, den);
    cout << round(num / (double)g) << round(den / (double)g) << endl;
    return 0;
}
