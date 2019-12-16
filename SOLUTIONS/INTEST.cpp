//
// Created by kanishk on 14/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, count = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int test;
        cin >> test;
        if(test%t==0){
            count++;
        }
    }
    cout << count << "\n";

}

