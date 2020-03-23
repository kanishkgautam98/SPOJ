//
// Created by kanishk on 22/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1){
        ll temp;
        cin >> temp;
        if(temp == -1){
            break;
        }
        if(temp == 1){
            cout << "Y" << "\n";
            continue;
        }
        temp-=1;
        ll ans = 0;
        ll i = 1;
        //cout << temp << endl;
        while(ans < temp){
            ans += 6*i;
            i += 1;
        }
        if(ans == temp) {
            //cout << ans << endl;
            cout << "Y" << "\n";
        } else {
           // cout << ans << endl;
            cout << "N" << "\n";
        }

    }

}
