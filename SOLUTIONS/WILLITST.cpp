//
// Created by kanishk on 12/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n ;
        cin >> n;
        if((n&(n-1))==0){
            cout << "TAK" << endl;
        }
        else{
            cout << "NIE" << endl;
        }
}

