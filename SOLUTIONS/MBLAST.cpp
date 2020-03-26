//
// Created by kanishk on 25/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define loop(i, n) for(int i = 0; i < n; i++)
#define ll long long
ll dp[2005][2005];

ll calc(string a, string b, ll k){
    ll size1 = a.size()+1;
    ll size2 = b.size()+1;
    loop(i, 2005){
        dp[0][i] = k*i;
        dp[i][0] = k*i;
    }

    for(int i = 1; i < size1; i++){
        for(int j = 1; j < size2; j++){
            ll opt1 = dp[i-1][j-1] + abs((ll)(a[i-1]-b[j-1]));
            ll opt2 = dp[i-1][j] + k;
            ll opt3 = dp[i][j-1] + k;
            dp[i][j] = min(opt1, min(opt2, opt3));
        }
    }

    return dp[a.size()][b.size()];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b;
    ll k;
    cin >> a >> b >> k;

    cout << calc(a, b, k) << "\n";

}