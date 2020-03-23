//
// Created by kanishk on 23/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    io
    ll input;
    cin >> input;
    set<ll>s;
    bool ans = true;
    ll count = 0;
    while(input != 1){
        string temp = to_string(input);
        ll temp2=0;
        loop(i, temp.size()){
            int val = temp[i]-'0';
            temp2 += pow(val, 2);
        }
      //  cout << temp2 << endl;
        if(s.find(temp2) == s.end()){
            s.insert(temp2);
            input = temp2;
            count++;
        } else {
            ans = false;
            break;
        }
    }

    if(ans){
        cout << count << "\n";
    } else {
        cout << -1 << "\n";
    }
}

