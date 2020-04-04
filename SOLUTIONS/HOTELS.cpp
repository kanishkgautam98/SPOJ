//
// Created by kanishk on 04/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[300001];
int main(){
    ll n, m;
    cin >> n >> m;
    loop(i, 0, n){
        cin >> a[i];
    }
    ll start = 0;
    ll ans = 0;
    ll maxans = 0;
    loop(i, 0, n){
        ans+=a[i];
        while(ans>m && start!=i){
            ans-=a[start];
            start++;
        }
        if(maxans < ans){
            maxans = ans;
        }
    }
    cout << maxans << "\n";


}
