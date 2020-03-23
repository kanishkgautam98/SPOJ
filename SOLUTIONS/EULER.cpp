//
// Created by kanishk on 23/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
ll const size = 1E6+1;
ll euler[size];

void precompute(){
    euler[0] = 0;
    euler[1] = 1;
    loop(i, size){
        euler[i] = i;
    }

    for(int i = 2; i < size; i++){
        if(euler[i] == i){
            for(int j = i; j < size; j+= i){
                euler[j] = euler[j] - (euler[i]/i);
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    ll t;
    cin >> t;
    while(t--){
        ll input;
        cin >> input;
        cout << euler[input] << "\n";
    }
}
