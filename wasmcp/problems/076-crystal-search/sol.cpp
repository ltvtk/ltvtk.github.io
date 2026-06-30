#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0;
    int hi = n - 1;
    int ans = -1;
    while(lo <= hi){
        int mid = (int)floor((lo + hi) / (double)2);
        if(a[mid] == x){
            ans = mid;
            hi = mid - 1;
        } else if(a[mid] < x){
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
