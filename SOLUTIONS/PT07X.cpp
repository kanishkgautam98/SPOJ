//
// Created by kanishk on 07/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll const size = 1E5;
ll dp[size+1][2];


void func(ll node, ll parent, vector<int>v[]){

    dp[node][1]=1;

    for(auto itr = v[node].begin(); itr!=v[node].end(); itr++){
        if(*itr == parent){
            continue;
        }
        func(*itr, node, v);
        dp[node][1] += min(dp[*itr][0], dp[*itr][1]);
        dp[node][0] += dp[*itr][1];
    }
}




int main(){
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    vector<int>v[n+1];

    loop(i, 1, n){
        int start, end;
        cin >> start >> end;
        v[start].push_back(end);
        v[end].push_back(start);
    }

     func(1, 0, v);
    ll ans  = min(dp[1][0], dp[1][1]);
    ans = max((ll)1, ans);

    cout << ans << "\n";


}
