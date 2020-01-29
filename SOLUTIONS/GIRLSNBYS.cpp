//
// Created by kanishk on 22/01/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true) {
        double g, b;
        cin >> g >> b;
        if(g==-1 || b == -1){
            break;
        }
        double  result  = max(g,b)/(min(g,b)+1.0);
        result  = ceil(result);
        cout << result << "\n";
    }
}

