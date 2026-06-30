#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long i = 2;
    while(i * i <= n && n % i != 0){
        i++;
    }
    if(n >= 2 && i * i > n){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
