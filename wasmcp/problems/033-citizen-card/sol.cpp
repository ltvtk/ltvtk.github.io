#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    string age;
    string height;
    getline(cin, name);
    getline(cin, age);
    getline(cin, height);
    cout << "NAME: " + name << endl;
    cout << "AGE: " + age << endl;
    cout << "HEIGHT: " + height + " m" << endl;
    return 0;
}
