//
// Created by kanishk on 02/04/20.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int money;
    cin >> money;
    int cat[7];
    memset(cat, -1, sizeof(cat));

    while(n--){
        int type, price, quality;
        cin >> type >> price >> quality;
        cat[type] = (cat[type]>quality)?cat[type]:quality;
    }
    bool ans = true;
    int val = INT_MAX;
    for(int i = 1; i < 7; i++){
        if(cat[i]==-1){
            ans = false;
            break;
        }
        else{
            val = (val<cat[i])?val:cat[i];
        }
    }
    if(ans){
        cout << val << endl;
    } else{
        cout << 0 << endl;
    }
}

