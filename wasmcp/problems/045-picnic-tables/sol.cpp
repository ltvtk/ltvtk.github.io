#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tables = (int)floor((n + 5) / (double)6);
    int empty = tables * 6 - n;
    cout << tables << empty << endl;
    return 0;
}
