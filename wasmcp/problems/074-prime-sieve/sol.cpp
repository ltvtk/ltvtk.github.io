#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n < 2){
        cout << 0 << endl;
    } else {
        vector<int> sieve(n + 1, 1);
        sieve[0] = 0;
        sieve[1] = 0;
        for(int i = 2; i * i <= n; i++){
            if(sieve[i]){
                for(int j = i * i; j <= n; j += i){
                    sieve[j] = 0;
                }
            }
        }
        int count = 0;
        for(int i = 2; i <= n; i++){
            if(sieve[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
