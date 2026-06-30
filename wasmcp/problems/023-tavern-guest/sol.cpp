#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    // Y is always divisible by 8; round() converts float division back to int
    int after3 = (int)round((0 + Y) / 2.0);
    int after2 = (int)round((after3 + Y) / 2.0);
    int start  = (int)round((after2 + Y) / 2.0);
    cout << start << endl;
    return 0;
}
