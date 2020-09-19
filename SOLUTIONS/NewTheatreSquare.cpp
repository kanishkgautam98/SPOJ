//
// Created by kanishk on 28/05/20.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<char>v(m);
        vector<bool>dp(m, false);
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                cin >> v[j];
            }
            for(int j = 0; j < m; j++){
                if(v[j]=='.'){
                    ans += x;
                    if(j-1 >=0 && v[j-1]=='.'&& dp[j-1]==false && y < 2*x){
                        ans = ans+y-(2*x);
                        dp[j] = dp[j-1] = true;
                    }
                }
            }
           // cout << ans << " ";
        }
        cout <<  ans << endl;

    }

}
