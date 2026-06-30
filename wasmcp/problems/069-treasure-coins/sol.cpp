#include<bits/stdc++.h>
using namespace std;
int main(){
    long long b;
    cin >> b;
    long long count = 0;
    long long c = 500;
    count += (long long)floor(b / (double)c);
    b %= c;
    c = 200;
    count += (long long)floor(b / (double)c);
    b %= c;
    c = 100;
    count += (long long)floor(b / (double)c);
    b %= c;
    c = 50;
    count += (long long)floor(b / (double)c);
    b %= c;
    c = 20;
    count += (long long)floor(b / (double)c);
    b %= c;
    c = 10;
    count += (long long)floor(b / (double)c);
    b %= c;
    cout << count << endl;
    return 0;
}
