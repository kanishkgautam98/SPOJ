//
// Created by kanishk on 27/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll const size = 1E5+1;
ll dp[size];
ll value[501];
ll weight[501];

ll func(ll n, ll w){

    loop(i, 0, w+1){
        loop(j, 0, n){
            if(weight[j]<=i){
                dp[i] = min(dp[i], value[j]+dp[i-weight[j]]);
            }
        }
    }

//    loop(i, 0, w+1){
//        cout << dp[i] << " ";
//    }cout << endl;


    return dp[w];
}


int main(){
    io
    ll t;
    cin >> t;
    while(t--){
        ll empty, filled;
        cin >> empty >> filled;
        ll w = filled - empty;
        loop(i, 0, w+1){
            dp[i] = INT_MAX;
        }
        dp[0] = 0;
        ll n;
        cin >> n;
        loop(i, 0, n){
            cin >> value[i] >> weight[i];
        }

        ll out = func(n, w);
        if(out==INT_MAX){
            cout << "This is impossible."<<"\n";
        }else{
            cout <<"The minimum amount of money in the piggy-bank is "<<out<<".\n";
        }
    }

}
