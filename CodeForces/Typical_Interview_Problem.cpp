//Author  : Heet Vekariya
//Purpose : Typical Interview Problem
//Date    : 11/3/2023

#include <string.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        string str, input;

        int k;
        cin >> k >> input;
        for(int i = 1; i < 100; i++){
            if(i % 3 == 0) str += 'F';
            if(i % 5 == 0) str += 'B';            
        }
        
        if(str.find(input) != string::npos){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;

    }
    return 0;
}