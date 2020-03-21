#include<bits/stdc++.h>
using namespace std;
void buildTree(int * a, int start, int end, int * segmentTree, int node){
    if(start==end){
        segmentTree[node-1] = a[start];
    } else {
        int mid = (start+end)/2;
        buildTree(a, start, mid, segmentTree, 2*node);
        buildTree(a, mid+1, end, segmentTree, 2*node+1);
        segmentTree[node-1] = max(segmentTree[2*node-1], segmentTree[2*node]);
    }
}

int query(int * segmentTree, int start, int end, int l, int r, int node) {
    if(start>r || end < l){
        return INT_MIN;
    }else if(start>=l && end<=r){
        return segmentTree[node-1];
    } else {
        int mid = (start+end)/2;
        int opt1 = query(segmentTree, start, mid, l, r, 2*node);
        int opt2 = query(segmentTree, mid+1, end, l, r, 2*node+1);
        return max(opt1, opt2);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int * a = new int [n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int segmentTreeSize = 2*n-1;
    int * segmentTree = new int[segmentTreeSize];
    int node = 1;
    buildTree(a, 0, n-1, segmentTree, node);

    for(int i = 0; i < segmentTreeSize; i++){
        cout << segmentTree[i] << " ";
    } cout << endl;

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        cout << query(segmentTree, 1, segmentTreeSize, l, r, 1) << endl;
    }

}