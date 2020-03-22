//
// Created by kanishk on 21/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(ll i = 0; i < n; i++)

int lcs(string input, string rev) {
    ll newSize = input.size()+1;
    ll ** dp = new ll* [input.size()+1];
    //fill(dp, dp+input.size()+1, new ll[input.size()+1]);
    loop(i, newSize){
        dp[i] = new ll[newSize];
    }


    loop(i, newSize){
        loop(j, newSize){
            if(i==0 || j==0){
                dp[i][j] = 0;
            } else if(input[i-1] == rev[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    ll ans = dp[newSize-1][newSize-1];
    for(ll i = 0; i  < newSize; i++){
        delete [] dp[i];
    } delete [] dp;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        string input;
        cin >> input;
        string rev = input;
        reverse(rev.begin(), rev.end());
     //   cout << input << " " << rev << endl;
        int lcsValue = lcs(input, rev);
        cout << input.length() - lcsValue << "\n";
    }
}
