//
// Created by kanishk on 08/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[1000];
ll dp[1000][1000];

ll sum(int start, int end){
    ll ans = 0;
    loop(i, start, end+1){
        ans+=a[i];
    }
    return ans%100;
}

ll mixtures(ll i, ll j){
    // Base case
    if(i>=j){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    dp[i][j] = INT_MAX;

    for(int k = i; k <= j; k++){
        dp[i][j] = min(dp[i][j], mixtures(i, k)+mixtures(k+1,j)+sum(i,k)*sum(k+1,j));
    }
    return dp[i][j];
}

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        loop(i, 0, n){
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));

        cout << mixtures(0, n-1) << "\n";


    }
}
