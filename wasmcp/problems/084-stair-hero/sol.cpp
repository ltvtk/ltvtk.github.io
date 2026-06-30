#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
    } else {
        long long a = 1;
        long long b = 2;
        for(int i = 3; i <= n; i++){
            long long c = a + b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    return 0;
}
