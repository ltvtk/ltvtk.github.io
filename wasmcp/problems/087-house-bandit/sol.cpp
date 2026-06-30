#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> g(n);
    for(int i = 0; i < n; i++){
        cin >> g[i];
    }
    if(n == 1){
        cout << g[0] << endl;
        return 0;
    }
    long long prev2 = g[0];
    long long prev1 = max(g[0], g[1]);
    for(int i = 2; i < n; i++){
        long long curr = max(prev1, prev2 + g[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << endl;
    return 0;
}
