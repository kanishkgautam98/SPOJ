//
// Created by kanishk on 08/04/20.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
int row[]={-1, -1, -1, 0, 0, 1, 1, 1};
int column[]={-1, 0, 1, -1, 1, -1, 0, 1};
int dp[185][185];
bool visited[185][185];

int dfsWithDp(int i, int j, int n, int m, vector<string> v) {
    visited[i][j]=true;
    if (v[i][j] == '1') {
        return dp[i][j]=0;
    }
    int ans = INT_MAX;
    loop(k, 0, 8) {
        int newRow = i + row[k];
        int newColumn = j + column[k];
        if (i < 0 || i > n || j < 0 || j > m) {
            continue;
        } else if(dp[i][j]!=-1){
            ans = min(ans, dp[i][j]+1);
        } else{
            ans = min(ans, 1+dfsWithDp(i + row[k], j + column[k], n, m, v));
        }
    }
    return dp[i][j] = ans;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v;

        memset(visited, false, sizeof(visited));
        loop(i, 0, n) {
            string temp;
            cin >> temp;
            v.push_back(temp);
        }
        memset(dp, -1, sizeof(dp));

        loop(i, 0, n){
            loop(j, 0, m){
                if(visited[i][j]==false){
                    dfsWithDp(i, j, n, m, v);
                }
            }
        }


        loop(i, 0, n) {
            loop(j, 0, m) {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

    }
}


