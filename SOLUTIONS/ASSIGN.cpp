//
// Created by kanishk on 25/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n][n];
        loop(i, n){
            loop(j, n){
                cin >> a[i][j];
            }
        }

        ll size = 1<<n;
        ll dp[size];
        fill(dp, dp+size, 0);
        dp[0] = 1;

        loop(i, size){
            ll setBits = __builtin_popcount(i);

            loop(j, n){
                if(a[setBits][j]==0 || (i & 1<<j)){
                    continue;
                } else {
                    dp[i|(1<<j)]+=dp[i];
                }
            }

        }
        cout << dp[size-1] << "\n";

    }
}
