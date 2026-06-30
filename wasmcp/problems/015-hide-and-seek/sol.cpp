#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, T, Vt, Vr;
    cin >> R;
    cin >> T;
    cin >> Vt;
    cin >> Vr;
    int gap  = R - T;
    int rel  = Vt - Vr;
    int time = (int)floor(gap / (double)rel);
    int meet = T + time * Vt;
    cout << time << meet << endl;
    return 0;
}
