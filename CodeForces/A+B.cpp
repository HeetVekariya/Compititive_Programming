//Author  : Heet Vekariya
//Purpose : A + B?
//Date    : 14/3/2023

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << ((int)s[0] - '0') + ((int)s[2] - '0') << endl;
    }
    return 0;
}