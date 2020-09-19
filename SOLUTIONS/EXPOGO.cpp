//
// Created by kanishk on 19/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool compute(ll posX, ll &forward, ll &backward){
    ll xVar = 0, temp1 = 1, temp2 = 1;
    bool ans = true;
    while(xVar < posX){
        forward++;
        xVar += temp1;
        temp1*=2;
    }
    if(xVar > posX){
        while(xVar > posX){
            backward++;
            xVar -= temp2;
            temp2 *= 2;

        }
    }

    if(xVar != posX){
        ans = false;
    }
    return ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    int count = 0;
    while(t--){
        ll x, y;
        count++;
        cin >> x >> y;
        ll posX = abs(x);
        ll posY = abs(y);
        ll forwardx = 0, backwardx = 0, forwardy = 0, backwardy = 0;

        if(!(compute(posX, forwardx, backwardx))){
            cout << "Case #"<< count << ": "<<"IMPOSSIBLE"<<"\n";
            continue;
        }

        if(!(compute(posY, forwardy, backwardy))){
            cout << "Case #"<< count << ": "<<"IMPOSSIBLE"<<"\n";
            continue;
        }

        string ans = "";
        if(posX/x == 1){
            for(int i = 0; i < forwardx; i++){
                ans+='E';
            }
            for(int i = 0; i < backwardx; i++){
                ans+='W';
            }
        } else {
            for(int i = 0; i < forwardx; i++){
                ans+='W';
            }
            for(int i = 0; i < backwardx; i++){
                ans+='E';
            }
        }

        if(posY/y == 1){
            for(int i = 0; i < forwardy; i++){
                ans+='N';
            }
            for(int i = 0; i < backwardy; i++){
                ans+='S';
            }
        } else {
            for(int i = 0; i < forwardy; i++){
                ans+='S';
            }
            for(int i = 0; i < backwardy; i++){
                ans+='N';
            }
        }

        cout << "Case #"<< count << ": "<<ans<<"\n";
    }

}

