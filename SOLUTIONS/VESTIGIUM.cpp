//
// Created by kanishk on 04/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[102][102];

ll traceFunc(ll n){
    ll i = 0, j = 0, ans = 0;
    while(i<n && j< n){
        ans += a[i][j];
        i++; j++;
    }
    return ans;
}

bool rFunc(int i, ll n){
    unordered_map<int,int>mapp;
    loop(j, 0, n){
        if(mapp[a[i][j]]>0){
            return true;
        }
        mapp[a[i][j]]++;
    }
    return false;
}

bool cFunc(int i, ll n){
    unordered_map<int,int>mapp;
    loop(j, 0, n){
        if(mapp[a[j][i]]>0){
            return true;
        }
        mapp[a[j][i]]++;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    int count = 0;
    while(t--){
        count++;
        ll n;
        cin >> n;
        loop(i, 0, n){
            loop(j, 0, n){
                cin >> a[i][j];
            }
        }

        ll trace = traceFunc(n);
        ll repeatedRows = 0;
        ll repeatedColumns = 0;

        loop(i, 0, n){
            if(rFunc(i, n)){
                repeatedRows++;
            }
            if(cFunc(i, n)){
                repeatedColumns++;
            }
        }

        cout << "Case #" << count << ": "<<trace <<" "<<repeatedRows<<" "<<repeatedColumns<<"\n";

    }

}
