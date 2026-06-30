#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long result = 0;
    for(int i = 0; i < n; i++){
        int bit;
        cin >> bit;
        result = result * 2 + bit;
    }
    cout << result << endl;
    return 0;
}
