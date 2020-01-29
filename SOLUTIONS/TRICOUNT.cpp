//
// Created by kanishk on 20/01/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        if(n&1){
            cout << (((n*(n+2))*(2*n+1))-1)/8 << endl;
        } else {
            cout << (((n*(n+2))*(2*n+1)))/8 << endl;
        }
    }
}

