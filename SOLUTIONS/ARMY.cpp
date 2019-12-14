//
// Created by kanishk on 13/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int * g = new int[n];
        int * me = new int[m];
        for(int i = 0; i < n; i++){
            cin >> g[i];
        }
        for(int i = 0; i < m; i++){
            cin >>me[i];
        }
        sort(g, g+n);
        sort(me, me+m);
        if(g[n-1]>=me[m-1]){
            cout << "Godzilla" << endl;
        } else {
            cout << "MechaGodzilla" << endl;
        }
        delete [] g;
        delete [] me;

    }
    return 0;
}
