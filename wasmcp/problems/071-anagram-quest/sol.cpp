#include<bits/stdc++.h>
using namespace std;
int main(){
    string w1, w2;
    cin >> w1;
    cin >> w2;
    sort(w1.begin(), w1.end());
    sort(w2.begin(), w2.end());
    if(w1 == w2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
