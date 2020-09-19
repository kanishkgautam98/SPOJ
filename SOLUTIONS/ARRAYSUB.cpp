//
// Created by kanishk on 08/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll const size = 1E6;
ll a[size+1];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    loop(i, 0, n){
        cin >> a[i];
    }
    ll k;
    cin >> k;
    deque<ll>q(k);
    int i;
    for(i=0; i<k;i++){
        while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    for(;i < n; i++){
        cout << a[q.front()] << " ";

        while(!q.empty() && q.front() <= i-k){
            q.pop_front();
        }

        while(!q.empty() && a[i]>=a[q.back()]){
            q.pop_back();
        }

        q.push_back(i);
    }
    cout << a[q.front()] << "\n";

}
