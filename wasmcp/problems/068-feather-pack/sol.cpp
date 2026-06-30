#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, t;
    cin >> n;
    cin >> t;
    vector<long long> w(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    long long total = 0;
    long long count = 0;
    for(int i = 0; i < n; i++){
        if(total + w[i] <= t){
            total += w[i];
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
