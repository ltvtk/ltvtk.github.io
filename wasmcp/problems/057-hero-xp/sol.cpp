#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long total = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        total += i * i;
    }
    cout << total << endl;
    return 0;
}
