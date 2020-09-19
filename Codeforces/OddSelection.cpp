//
// Created by kanishk on 31/05/20.
//
#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]&1){
                odd++;
            }else{
                even++;
            }
        }
        bool ans = false;
        odd = (odd&1)?odd:odd-1;
        if(odd+even>=x){
            ans = true;
        }


        if(ans){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }


    }
}

