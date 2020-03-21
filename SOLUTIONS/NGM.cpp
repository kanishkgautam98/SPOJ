//
// Created by kanishk on 21/03/20.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int value = n%10;
    if(value%10 == 0){
        cout << 2 << endl;
    } else {
        cout << 1 <<"\n"<< value%10 << endl;
    }

}
