#include<bits/stdc++.h>
using namespace std;

void dfs(vector< vector<int> >v, int node, vector<int>&distance, vector<bool>visited, int step, int n){

    distance[node] = step;
    visited[node] = true;

    for(auto itr = v[node].begin(); itr != v[node].end(); itr++) {
        if(visited[*itr] == false){
            dfs(v, *itr, distance, visited, step+1, n);
        }
    }
    return;

}

int helper (vector<int> distance, int n) {
    int maxValue = 0;
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(distance[i] > maxValue){
            index = i;
            maxValue = distance[i];
        }
    }
    return index;
}





int main(){
    int n;
    cin >> n;
    vector< vector<int> >v(n);
    for(int i = 0; i < n-1; i++) {
        int se, ee;
        cin >> se >> ee;
        se--;
        ee--;
        v[se].push_back(ee);
        v[ee].push_back(se);

    }

    vector<int>distancee(n, 0);
    vector<bool>visited(n, false);

    dfs(v, 0, distancee, visited, 0, n);
   // int nextNode = helper(distance, n);
   auto nextNodee = distance(distancee.begin(), distancee.end());
   int nextNode = *nextNodee;
    //cout << nextNode << endl;

    vector<int>distance2(n, 0);
    vector<bool>visited2(n, false);

    dfs(v, nextNode,distance2, visited2, 0, n);
    cout << *max_element(distance2.begin(), distance2.end())<<endl;


    //cout<< helper(distance2, n)+1 <<  endl;

}