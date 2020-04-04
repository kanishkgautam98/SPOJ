//
// Created by kanishk on 03/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll ans = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        loop(i, 0, n){
            cin >> a[i];
        }

        sort(a, a+n, greater<int>());
        ans = 0;

        for(int i = 0; i < n; i++){
            if(a[i]-i<=0){
                break;
            }
            ans += a[i]-i;
            ans = ans%1000000007;
        }
        ans = ans%1000000007;
        cout << ans << "\n";

    }

}
