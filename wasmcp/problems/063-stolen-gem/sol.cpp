#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long total = 0;
    for(int i = 0; i < n - 1; i++){
        long long x;
        cin >> x;
        total += x;
    }
    long long expected = (long long)floor(n * (n + 1) / (double)2);
    cout << expected - total << endl;
    return 0;
}
