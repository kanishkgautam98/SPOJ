//
// Created by kanishk on 25/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    io
    ll x[90], y[90], z[90], dp[90];

    while(true){
        ll n;
        cin >> n;
        if(n==0){
            break;
        }
        loop(i, n){
            ll l, b, h;
            cin >> l >> b >> h;
            x[3*i]  = l; y[3*i] = b; z[3*i] = h;
            x[3*i+1] = b; y[3*i+1] = h; z[3*i+1] = l;
            x[3*i+2] = h; y[3*i+2] = l; z[3*i+2] = b;
        }
        n*=3;


        loop(i, n){
            for(int j = i+1; j < n; j++){
                if((x[j]<x[i] && y[j]<y[i])||(x[j]<y[i] && y[j]<x[i])){
                    swap(x[j],x[i]);
                    swap(y[j], y[i]);
                    swap(z[j], z[i]);
                }
            }
        }

        ll ans = -1;

        loop(i, n){
            dp[i] = z[i];

            for(int j = 0; j < i; j++){
                if((x[j]<x[i] && y[j]<y[i])||(x[j]<y[i] && y[j]<x[i])){
                  dp[i] = max(dp[i], dp[j]+z[i]);
                }
            }
            ans = max(dp[i], ans);}
        cout << ans << "\n";

    }
}