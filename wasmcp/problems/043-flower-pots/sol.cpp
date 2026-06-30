#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n;
    cin >> m;
    long long r = n % m;
    if (r == 0) {
        cout << 0 << endl;
    } else {
        cout << m - r << endl;
    }
    return 0;
}
