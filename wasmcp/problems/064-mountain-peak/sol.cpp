#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int ans = INT_MIN;
    bool found = false;
    for(int i = n - 2; i >= 1; i--){
        if(h[i] >= h[i - 1] && h[i] >= h[i + 1]){
            ans = h[i];
            found = true;
            break;
        }
    }
    if(found){
        cout << ans << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}
