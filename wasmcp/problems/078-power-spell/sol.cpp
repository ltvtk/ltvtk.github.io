#include<bits/stdc++.h>
using namespace std;
int main(){
    long long B, E, M;
    cin >> B;
    cin >> E;
    cin >> M;
    long long result = 1;
    B = B % M;
    while(E > 0){
        if(E % 2 == 1){
            result = (result * B) % M;
        }
        B = (B * B) % M;
        E = (long long)floor(E / (double)2);
    }
    cout << result << endl;
    return 0;
}
