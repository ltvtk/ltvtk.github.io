#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> L(n);
    vector<int> R(n);
    for(int i = 0; i < n; i++){
        cin >> L[i];
        cin >> R[i];
    }
    // Sort by R (end time): use simple selection sort for transpiler compatibility
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(R[j] < R[i]){
                int tmp = R[i]; R[i] = R[j]; R[j] = tmp;
                tmp = L[i]; L[i] = L[j]; L[j] = tmp;
            }
        }
    }
    int count = 0;
    int last_end = -1;
    for(int i = 0; i < n; i++){
        if(L[i] > last_end){
            count++;
            last_end = R[i];
        }
    }
    cout << count << endl;
    return 0;
}
