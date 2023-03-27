//Author  : Heet Vekariya
//Purpose : Find and Replace
//Date    : 26/3/2023


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        bool check = false;
        map <char, vector<int>> m;

        cin >> n;
        cin >> str;
        
        for(int i = 0; i < n; i++){
            m[str[i]].push_back(i);
            if((*m[str[i]].begin()) % 2 == 0 && (i % 2 != 0) || ((*m[str[i]].begin()) % 2 != 0 && (i % 2 == 0))){
                cout << "NO" << endl;
                check = true;
                break;
            }
        }
        if(!check){
            cout << "YES" << endl;
        }
    }
    return 0;
}