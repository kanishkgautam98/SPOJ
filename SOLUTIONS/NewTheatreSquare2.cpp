//
// Created by kanishk on 28/05/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<char>v(m);
        int singles = 0, doubles = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[j];
            }

            for(int j = 0; j < m; j++){
                if(v[j] == '.'){
                    singles++;
                }
                if(j-1 >=0 && v[j-1]=='.' && v[j]=='.'){
                    doubles++;
                    v[j-1]='*';
                    v[j] = '*';
                }
            }
        }
        int ans = 0;
        if(y < (2*x)){
            singles -= (doubles*2);
            ans = (doubles*y)+(singles*x);

        } else {
            ans = singles*x;
        }
        cout << ans << endl;
    }
}