#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0 || n == 1){
        cout << 0 << endl;
    } else if(n == 2){
        cout << 1 << endl;
    } else {
        long long a = 0;
        long long b = 0;
        long long c = 1;
        for(int i = 3; i <= n; i++){
            long long next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        cout << c << endl;
    }
    return 0;
}
