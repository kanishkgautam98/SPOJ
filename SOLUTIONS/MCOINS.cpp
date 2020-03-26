//
// Created by kanishk on 26/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll const size = 1E6+1;
ll dp[size];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll k, l, m;
    cin >> k >> l >> m;
    while(m--){
        ll n;
        cin >> n;
        memset(dp, 0, sizeof(dp));
        dp[0]=0;
        dp[1]=1;
        dp[k]=1;
        dp[l]=1;
        loop(i, 2, n+1){
            ll opt1=1, opt2=1, opt3=1;
            opt1 = dp[i-1];
            if(i-k>=0){
                opt2 = dp[i-k];
            }
            if(i-l>=0){
                opt3 = dp[i-l];
            }

            dp[i]=!(opt1 and opt2 and opt3);

        }


        if(dp[n]==1){
            cout << "A";
        } else {
            cout << "B";
        }
    }
}
