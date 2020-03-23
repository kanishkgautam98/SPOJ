//
// Created by kanishk on 22/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ans = 0;
    ll n;
    cin >> n;
    loop(i, n){
        ll temp;
        cin >> temp;
        ans ^= temp;
    }
    cout << ans << "\n";

}