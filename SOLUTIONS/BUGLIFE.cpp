//
// Created by kanishk on 21/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)

bool bfs(vector<ll>adj[], ll * color, int index) {
    queue<ll> q;
    q.push(index);
    color[index]=1;
    while(!q.empty()){
        ll front = q.front();
        q.pop();
        for(auto itr = adj[front].begin(); itr!=adj[front].end(); itr++){
            if(*itr == front || color[*itr] == color[front]){
                return false;
            } else if(color[*itr]==-1) {
                q.push(*itr);
                color[*itr] = 1 - color[front];
            }

        }
    }
    return true;
}





bool bipartite(ll nodes, vector<ll>adj[]){
    ll * color = new ll [nodes];
    fill(color, color+nodes, -1);

    loop(i, nodes){
        if(color[i] == -1){
            bool ans = bfs(adj, color, i);
            if(!ans){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    ll count = 0;
    while(t--){
        count++;
        ll nodes;
        cin >> nodes;
//        if(nodes%2 == 1){
//            cout << "Scenario #"<<count<<":\nSuspicious bugs found!"<<"\n";
//            continue;
//        }
        vector<ll>adj[nodes];
        ll edges;
        cin >> edges;
        loop(i, edges){
            ll first, second;
            cin >> first >> second;
            first--; second--;
            adj[first].push_back(second);
            adj[second].push_back(first);
        }

        if(bipartite(nodes, adj)){
            cout << "Scenario #"<<count<<":\nNo suspicious bugs found!"<<"\n";
        } else {
            cout << "Scenario #"<<count<<":\nSuspicious bugs found!"<<"\n";

        }
    }

}
