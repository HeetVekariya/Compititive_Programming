//Author  : Heet Vekariya
//Purpose : Two towers
//Date    : 12/3/2023

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, count = 0;
        string s, t;
        cin >> n >> m >> s >> t;

        reverse(t.begin(), t.end());
        s += t;

        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == s[i]) count++;
        }
        if(count > 1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}