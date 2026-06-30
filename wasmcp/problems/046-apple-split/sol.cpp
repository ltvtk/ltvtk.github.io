#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    cin >> m;
    int q = (int)floor(n / (double)m);
    int r = n % m;
    cout << q << r << endl;
    return 0;
}
