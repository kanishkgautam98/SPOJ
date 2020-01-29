//
// Created by kanishk on 18/01/20.
//
#include<bits/stdc++.h>
using namespace std;

void leaf(vector< vector<int> > v, int n, vector<int>& leaves, vector<bool> & visited, int index) {

    visited[index] = true;
    bool leaft = true;

    for(int i = 0; i < n; i++){
        if(v[index][i]==1 && visited[i]==false){
            leaft = false;
            leaf(v, n, leaves, visited, i);
        }
    }
    if(leaft){
        leaves.push_back(index);
    }
    return;

}

int dfs(int node, int n, vector<bool> &visited2, vector< vector<int> > v){
    visited2[node] = true;
    int max = 0;

    for(int i = 0; i < n; i++){
        if(v[node][i] == 1 && visited2[i] == false) {
            int dist = dfs(i, n, visited2, v);
            if(dist > max){
                max = dist;
            }
        }
    }
    return max+1;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector< vector<int> > v(n,vector<int>(n));
    for(int i = 0; i < n-1; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        v[x][y] = 1;
        v[y][x] = 1;
    }
    vector<int>leaves;
    vector<bool>visited(n, false);
    leaf(v, n, leaves, visited, 1);
    for(int i = 0; i < leaves.size(); i++){
        cout<<leaves[i]<<" ";
    }
    vector<bool>visited2(n, false);
    int node = leaves[leaves.size()-1];

    int distance = dfs(node, n, visited2, v);

    cout << distance << endl;


}
