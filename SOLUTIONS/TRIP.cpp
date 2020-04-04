//
// Created by kanishk on 03/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

void printStrings(set<string>s){
    for(auto itr = s.begin(); itr!=s.end(); itr++){
        cout << *itr << endl;
    }
    return;
}

void lcs(string x, string y){
    int dp[x.size()+1][y.size()+1];
    memset(dp, 0, sizeof(dp));
    set<string>s[x.size()+1][y.size()+1];

    for(int i = 0; i < x.size()+1; i++){
        s[i][0].insert("");
    }
    for(int j = 0; j < y.size()+1; j++){
        s[0][j].insert("");
    }

    for(int i = 1; i < x.size()+1; i++){
        for(int j = 1; j < y.size()+1; j++){
            if(x[i-1]==y[i-1]){
                dp[i][j] = dp[i-1][j-1]+1;
                for(auto itr = s[i-1][j-1].begin(); itr!=s[i-1][j-1].end(); itr++){
                    s[i][j].insert((*itr)+x[i-1]);
                }
            } else if(dp[i-1][j] > dp[i][j-1]){
                dp[i][j] = dp[i-1][j];
                for(auto itr = s[i-1][j].begin(); itr!=s[i-1][j].end(); itr++){
                    s[i][j].insert((*itr));
                }
            } else if(dp[i][j-1] > dp[i-1][j]){
                dp[i][j] = dp[i][j-1];
                for(auto itr = s[i][j-1].begin(); itr!=s[i][j-1].end(); itr++) {
                    s[i][j].insert((*itr));
                }
            } else{
                dp[i][j] = dp[i][j-1];
                for(auto itr = s[i-1][j].begin(); itr!=s[i-1][j].end(); itr++){
                    s[i][j].insert((*itr));
                }
                for(auto itr = s[i][j-1].begin(); itr!=s[i][j-1].end(); itr++) {
                    s[i][j].insert((*itr));
                }
            }
        }
    }
    printStrings(s[x.size()][y.size()]);
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        lcs(x, y);
        cout << endl;
    }
}

