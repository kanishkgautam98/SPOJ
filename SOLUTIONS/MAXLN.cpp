//
// Created by kanishk on 24/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    ll count = 0;
    while(t--){
        count++;
        ll input;
        cin >> input;
        input = 4*input*input;
        cout <<"Case "<<count<<": "<< input<<".25"<< "\n";

    }
}
