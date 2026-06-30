#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    int n     = (int)floor((B + D) / (double)(C - A));
    int price = n * A + B;
    cout << n << price << endl;
    return 0;
}
