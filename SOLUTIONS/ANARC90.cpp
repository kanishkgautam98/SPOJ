//
// Created by kanishk on 23/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)

int main(){
    ll count = 0;
    while(true){
        count++;
        string input;
        ll cost = 0;
        getline(cin, input);
        if(input[0] == '-'){
            break;
        }
        stack<char>s;
        loop(i, input.size()){
            if(s.empty()){
                s.push(input[i]);
            } else if((input[i]=='}' && s.top() == '{')){
                s.pop();
            } else {
                s.push(input[i]);
            }
        }
        long  double open = 0, close = 0;
         while(!s.empty()){
             if(s.top() == '{'){
                 open++;
             } else {
                 close++;
             }
             s.pop();
         }
         cost = ceil(open/2) + ceil(close/2);
         cout << count <<". "<< cost << "\n";
    }
}
