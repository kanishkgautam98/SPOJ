//
// Created by kanishk on 14/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, diff;
        cin >> n;
        int diagnol = (int) ceil ((sqrt(8*n+1)-1)/2);
        int endPoint = (diagnol*diagnol + diagnol)/2;

        if(n > endPoint){
           diff = n - endPoint;
        } else {
            diff = endPoint - n;
        }

        if(diagnol%2 == 0){
            cout << "TERM "<<n<<" IS "<<diagnol-diff<<"/"<<1+diff<<"\n";
        } else {
            cout << "TERM "<<n<<" IS "<<1+diff<<"/"<<diagnol-diff<<"\n";
        }
    }
}

