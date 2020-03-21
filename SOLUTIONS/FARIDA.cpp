//
// Created by kanishk on 21/03/20.
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)

void dp(ll * a, int n, int count){
    if(n==1){
        cout << "Case "<<count<<": "<<a[0]<<"\n";
        return;
    }
    ll opt1 = a[0];
    ll opt2;
    ll opt3 = 0;

    for(int i = 1; i < n; i++){
        opt2 = (opt1 > a[i]+opt3)?opt1:a[i]+opt3;
        opt3 = opt1;
        opt1 = opt2;
        //cout << opt2 << " " << opt3 << " " << opt1 << "\n";
    }
    cout << "Case "<<count<<": "<<max(opt2, opt1)<<"\n";
    return;
}
int main(){
    ll t;
    cin >> t;
    int count = 0;
    while(t--){
    ll n;
    count++;
    cin >> n;
    ll a[n];
    loop( i, n){
        cin >> a[i];
    }
    dp(a, n, count);
}}
