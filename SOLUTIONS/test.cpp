//
// Created by kanishk on 31/05/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin.clear();
        cin.ignore();
        string s;
        cin >> s;
       // cout << s << endl;
        string copy1 = s;
        string copy2 = s;
        sort(copy1.begin(), copy1.end());
        sort(copy2.begin(), copy2.end(), greater<char>());
        int cost1 = 0, cost2 = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i]!=copy1[i]){
                cost1++;
            }
            if(s[i]!=copy2[i]){
                cost2++;
            }
        }
        int cost = min(cost1, cost2);
        cost/=2;
        cout << cost << endl;
    }
}

