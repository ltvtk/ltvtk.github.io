#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> P(n + 1, 0);
    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        P[i + 1] = P[i] + x;
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l;
        cin >> r;
        cout << P[r + 1] - P[l] << endl;
    }
    return 0;
}
