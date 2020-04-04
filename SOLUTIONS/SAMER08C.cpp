//
// Created by kanishk on 29/03/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int ans = (n*(n+1)*(2*n+1))/6;
        cout << ans << "\n";
    }
}
