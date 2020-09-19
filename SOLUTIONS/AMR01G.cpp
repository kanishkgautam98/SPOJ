//
// Created by kanishk on 09/04/20.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[20001];

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        memset(a, 0, sizeof(a));

        loop(i, 0, n) {
            cin >> a[i];
        }
        sort(a, a + n);

        int start = 0;
        int end = k - 1;
        ll ans = INT_MAX;

        while (end < n) {
            ans = min(ans, a[end] - a[start]);


            end++;
            start++;
        }

        cout << ans << "\n";

    }
}
