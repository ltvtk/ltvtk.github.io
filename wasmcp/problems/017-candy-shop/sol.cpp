#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, A, B;
    cin >> M;
    cin >> A;
    cin >> B;
    int opt1   = (int)floor(M / (double)A);
    int combos = (int)floor(M / (double)B);
    int opt2   = combos * 2 + (int)floor((M % B) / (double)A);
    cout << max(opt1, opt2) << endl;
    return 0;
}
