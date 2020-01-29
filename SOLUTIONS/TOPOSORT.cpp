//
// Created by kanishk on 20/01/20.
//
#include<bits/stdc++.h>
using namespace std;

void dfs(int i, vector<vector<int>>v, vector<int>& visitedNodes, bool * visited, int n) {
    visited[i] = true;
    if(v[i].size()>0){
        for(int j = 0; j < v[i].size(); j++) {
            if(visited[v[i][j]] == false) {
                dfs(j, v, visitedNodes, visited, n);
            }
        }
    }

    visitedNodes.push_back(i);
    return;
}

void topsort(vector<vector<int>>v,  int n) {
    bool * visited = new bool [n]{false};
    vector<int> ordering;

    for(int i = 0; i < n; i++) {
        if(visited[i] == false) {
            vector<int>visitedNodes;
            //sort(v[i].begin(), v[i].end());
            dfs(i, v, visitedNodes, visited, n);

            for(auto nodes : visitedNodes){
                ordering.push_back(nodes);
            }
        }
    }
    reverse(ordering.begin(), ordering.end());
    for(auto node: ordering){
        cout << node << "\n";
    }

    delete [] visited;
    return;
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
   // cout << n << m;
    vector<vector<int>>v(n);
    for(int i = 0; i < m; i++){
        int source, destination;
        cin >> source >> destination;
        source--;
        destination--;
        v[source].push_back(destination);
    }
    for(int i = 0; i < n; i++){
        cout << i << ":";
        for(auto j = 0 ; j < v[i].size(); j++){
            cout <<v[i][j] <<" ";
        }
        cout << endl;
    }
    topsort(v, n);
}

