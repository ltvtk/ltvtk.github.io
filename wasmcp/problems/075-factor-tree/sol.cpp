#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> factors;
    for(long long d = 2; d * d <= n; d++){
        while(n % d == 0){
            factors.push_back(d);
            n /= d;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    for(int i = 0; i < (int)factors.size(); i++){
        if(i > 0){
            cout << " ";
        }
        cout << factors[i];
    }
    cout << endl;
    return 0;
}
