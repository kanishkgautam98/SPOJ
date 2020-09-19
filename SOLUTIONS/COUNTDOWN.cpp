//
// Created by kanishk on 17/05/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c = 0;
    int t;
    cin >> t;
    while(t--){
        c++;
        int n, k;
        cin >> n >> k;
        int a[n];
        //memset(a, 0, sizeof(a));
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;

        for(int i = n-1; i>=0; i--){
            if(a[i]==1){
                int count = 1;
                while(i-1 >=0 && a[i-1] == a[i]+1 && a[i] < k){
                    i--;
                }
                if(a[i]==k){
                    ans++;
                }
            }
        }



        cout << "Case #"<<c <<": "<<ans << "\n";

    }
}

