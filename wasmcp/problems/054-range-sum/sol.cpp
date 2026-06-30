#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    long long b;
    long long total = 0;
    cin >> a;
    cin >> b;
    for (long long i = a; i <= b; i++) {
        total += i;
    }
    cout << total << endl;
    return 0;
}
