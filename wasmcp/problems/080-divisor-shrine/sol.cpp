#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long count = 0;
    long long d = 1;
    while(d * d <= n){
        if(n % d == 0){
            count++;
            if(d * d != n){
                count++;
            }
        }
        d++;
    }
    cout << count << endl;
    return 0;
}
