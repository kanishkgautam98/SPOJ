//
// Created by kanishk on 25/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n;  i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    io
    ll t;
    cin >> t;
    while(t--){
        ll r, c;
        cin >> r >> c;
        ll arr[r][c];
        loop(i, r){
            loop(j, c){
                cin >> arr[i][j];
            }
        }


        ll dp[r+1][c+1];
        memset(dp, 0, sizeof(dp));




        ll ans = -1;

        loop(i, r+1){
            loop(j, c+1){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                    continue;
                }

                if(j != c){
                    dp[i][j] = arr[i-1][j-1]+max(dp[i-1][j-1], max(dp[i-1][j], dp[i-1][j+1]));}
                else{
                    dp[i][j] = arr[i-1][j-1]+max(dp[i-1][j-1], dp[i-1][j]);
                }

                ans = max(ans, dp[i][j]);
            }
        }

//        loop(i, r+1){
//            loop(j, c+1){
//                cout << dp[i][j]<<" ";
//            }
//        }cout << endl;

        cout << ans << "\n";

    }
}

