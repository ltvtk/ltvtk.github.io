#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    while(n >= 10){
        long long s = 0;
        long long temp = n;
        while(temp > 0){
            s += temp % 10;
            temp = (long long)floor(temp / (double)10);
        }
        n = s;
    }
    cout << n << endl;
    return 0;
}
