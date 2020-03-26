//
// Created by kanishk on 24/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
   io
    while(true){
        ll a, d;
        cin >> a >> d;
        if(a==0 || d ==0){
            break;
        }
      //  cout << a << d;
        ll attack[a];
        ll defence[d];


        loop(i, a){
            cin >> attack[i];
        }

        loop(i, d){
            cin >> defence[i];
        }

        sort(attack, attack + a);
        sort(defence, defence + d);

        if(attack[0] < defence[1]){
            cout << "Y" << "\n";
        } else {
            cout << "N" << "\n";
        }

    }
}