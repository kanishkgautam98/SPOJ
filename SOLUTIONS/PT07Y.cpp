#include<bits/stdc++.h>
using namespace std;

void dfsHelper(vector<vector<int>>v, int node, set<int> & visited){
    visited.insert(node);
    for(auto itr = v[node].begin(); itr != v[node].end(); itr++){
        if(visited.find(*itr) == visited.end()){
            dfsHelper(v, *itr, visited);
        }
    }
}


void dfs(vector< vector<int> > v){
    set<int>visited;

    dfsHelper(v, 1, visited);

    if(visited.size() != v.size()-1){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }
    return;

}


int main(){
    int n, m;
    cin >> n >> m;
    vector< vector<int> > v(n+1);

    for(int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    if(m != n-1){
        cout << "NO" << endl;
        return 0;
    }

    dfs(v);

    return 0;

}