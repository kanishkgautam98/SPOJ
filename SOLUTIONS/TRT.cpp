//
// Created by kanishk on 27/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll dp[2001][2001];
ll a[2000];

ll profit(ll se, ll ei, ll n, ll year){
    if(se>ei){
        return 0;
    }

    if(dp[se][ei] != -1){
        return dp[se][ei];
    }

    return dp[se][ei] = max(profit(se+1, ei, n, year+1)
            +a[se]*year, profit(se, ei-1, n, year+1)+ a[ei]*year);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    loop(i, 0, n){
        cin >> a[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << profit(0, n-1, n, 1) << endl;

}