//
// Created by kanishk on 02/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

ll func(string x, string y, ll k){
    int dp[x.size()+1][y.size()+1];
    int count[x.size()+1][y.size()+1];
    memset(dp, 0, sizeof(dp));
    memset(count, 0, sizeof(count));

    loop(i, 1, x.size()+1){
        loop(j, 1, y.size()+1){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(x[i-1]==y[j-1]){
                count[i][j] = count[i-1][j-1]+1;
            } else {
                count[i][j] = 0;
            }

            if(count[i][j]>=k){
                loop(m, k, count[i][j]+1){
                    dp[i][j] = max(dp[i][j], dp[i-m][j-m]+m);
                }
            }
        }
    }
    return dp[x.size()][y.size()];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        ll k;
        cin >> k;
        if(k==0){
            break;
        }
        string x, y;
        cin >> x >> y;
        cout << func(x, y, k) << "\n";
    }
}

