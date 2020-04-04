//
// Created by kanishk on 29/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll const size = 1E5;
ll dp[size+1][size+1];
ll a[size+1][size+1];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        ll n, m;
        cin >> n >> m;
        if(n==0 || m==0){
            break;
        }
        memset(dp, 0, sizeof(dp));
        memset(a, 0, sizeof(a));

        loop(i,0 ,n){
            loop(j, 0, m){
                cin >> a[i][j];
            }
        }

        loop(i, 0, n){
            loop(j, 0, m){
                if(j-2>=0){
                    dp[i] = max(dp[i)
                }
            }
        }


    }

}