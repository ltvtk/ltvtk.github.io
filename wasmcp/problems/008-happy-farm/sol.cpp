#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M;
    cin >> N;
    int dogs     = (int)floor((N - M * 2) / 2.0);
    int chickens = M - dogs;
    cout << chickens << dogs << endl;
    return 0;
}
