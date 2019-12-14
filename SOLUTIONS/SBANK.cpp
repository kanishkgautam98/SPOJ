//
// Created by kanishk on 12/12/19.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        map<string, int>m;
        int n;
        cin >> n;
        cin.ignore();

        for(int i = 0; i < n; i++){
            string temp;
            cin.clear();
            getline(cin, temp);
            m[(string)temp]++;
        }

        for(auto itr = m.begin(); itr!=m.end(); itr++){
            cout << itr->first << " " << itr->second << endl;
        }
    }
}