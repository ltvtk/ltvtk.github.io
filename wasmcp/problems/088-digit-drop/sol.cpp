#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int INF = 1000000000;
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        int temp = i;
        while(temp > 0){
            int d = temp % 10;
            if(d > 0 && dp[i - d] + 1 < dp[i]){
                dp[i] = dp[i - d] + 1;
            }
            temp = (int)floor(temp / (double)10);
        }
    }
    cout << dp[n] << endl;
    return 0;
}
