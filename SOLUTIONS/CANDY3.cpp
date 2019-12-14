//
// Created by kanishk on 09/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
       // long long int ans = 0;
        long long int remainder=0;
        for(int i = 0; i < n; i++){
            long long int temp;
            cin >> temp;
            remainder = (temp+remainder)%n;
        }
        if(remainder==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

