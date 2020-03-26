//
// Created by kanishk on 26/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll const size = 2000;
ll dp[size];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    memset(dp, 0, sizeof(dp));
    ll top[2*n];
    ll height[2*n];
    ll l[n], b[n];
    loop(i, 0, n){
        cin >> l[i] >> b[i];
    }
    ll a=0, in=1;
    for(int i = 0; i < n;i++){
        top[a] = l[i];
        height[a] = b[i];
        top[in] = b[i];
        height[in] = l[i];
        a+=2;
        in+=2;
    }

    dp[0] = top[0];
    dp[1] = top[1];

    loop(i, 2, 2*n){
        if(i&1){
            ll opt1 = top[i]+dp[i-3]+abs(height[i]-height[i-3]);
            ll opt2 = top[i]+dp[i-2]+abs(height[i]-height[i-2]);
            dp[i] = (opt1>opt2)?opt1:opt2;
        } else {
            ll opt1 = top[i]+dp[i-2]+abs(height[i]-height[i-2]);
            ll opt2 = top[i]+dp[i-1]+abs(height[i]-height[i-1]);
            dp[i] = (opt1>opt2)?opt1:opt2;
        }
    }

    cout << max(dp[2*n-2], dp[2*n-1]) << endl;


}
