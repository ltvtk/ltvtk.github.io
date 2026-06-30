#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long result = n;
    long long temp = n;
    for(long long d = 2; d * d <= temp; d++){
        if(temp % d == 0){
            while(temp % d == 0){
                temp = (long long)floor(temp / (double)d);
            }
            result -= (long long)floor(result / (double)d);
        }
    }
    if(temp > 1){
        result -= (long long)floor(result / (double)temp);
    }
    cout << result << endl;
    return 0;
}
