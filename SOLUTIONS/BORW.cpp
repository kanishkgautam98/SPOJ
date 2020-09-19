//
// Created by kanishk on 07/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[202];
ll dp[202][202][202];

ll func(int index, int lastBlack, int lastWhite, ll n){
    if(dp[index][lastBlack][lastWhite] != -1){
        return dp[index][lastBlack][lastWhite];
    }
    if(index==n){
        return 0;
    }
    dp[index][lastBlack][lastWhite]=INT_MAX;

    ll opt1 = func(index+1, lastBlack, lastWhite, n);
    opt1+=1;
    ll opt2 = INT_MAX, opt3 = INT_MAX;
    if(a[index]>a[lastBlack] || lastBlack == 0){
        opt2 = func(index+1, index, lastWhite, n);
    }
    if(a[index]<a[lastWhite] || lastWhite==0){
        opt3 = func(index+1, lastBlack, index, n);
    }
    return dp[index][lastBlack][lastWhite] = (min(opt1, min(opt2, opt3)));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        ll n;
        cin >> n;
        if(n==-1){
            break;
        }
        memset(a, 0, sizeof(a));
        loop(i, 0, n){
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));
        cout << func(0, 0, 0, n) << "\n";
    }

}
