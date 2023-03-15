//Author  : Heet Vekariya
//Purpose : Is it a cat?
//Date    : 14/3/2023

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string str, ans;
        vector<char> v;

        cin >> n >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        v.push_back(str[0]);
        
        for(int i = 1; i < str.length(); i++) {
            if(str[i] != str[i-1]){
                v.push_back(str[i]);
            }
        }

        if(v.size() == 4 && v[0] == 'm' && v[1] == 'e' && v[2] == 'o' && v[3] == 'w')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}