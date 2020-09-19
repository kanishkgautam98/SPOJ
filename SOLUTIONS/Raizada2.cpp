//
// Created by kanishk on 08/09/20.
//
#include<bits/stdc++.h>
using namespace std;
const int maxi = 1e9+7;

int main(){
    int n;
    cin >> n;
    //cout << n;
    string s;
    for(int i = 1; i <= n; ++i){
        string temp;int temp2 = i;
        while(temp2 > 0){
            temp += (char)(temp2%2)+'0';
            temp2 = temp2/2;
        }
        reverse(temp.begin(), temp.end());
        s += temp;
    }
   // cout << s << endl;
    int p=1;
    int ans = 0;
    for(int i = s.size()-1; i>=0; --i){
        ans = ((ans%maxi)+(((s[i]-'0')*p)%maxi))%maxi;
        p= (p*2)%maxi;
    }
    cout << ans << endl;

}
