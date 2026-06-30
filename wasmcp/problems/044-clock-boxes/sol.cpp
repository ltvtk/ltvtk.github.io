#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n;
    cin >> m;
    long long q = (int)floor(n / (double)m);
    long long r = n % m;
    cout << q << r << endl;
    return 0;
}
