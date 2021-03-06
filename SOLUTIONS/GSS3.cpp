//
// Created by kanishk on 20/03/20.
//
#include<bits/stdc++.h>
using namespace std;

int indexingArray[60007];

class node {
public:
    int prefixSum = 0;
    int suffixSum = 0;
    int sum = 0;
    int maxSum = 0;
};

node combine(node left, node right){
    node temp;
    temp.sum = left.sum + right.sum;
    temp.prefixSum = max(left.prefixSum, left.sum+right.prefixSum);
    temp.suffixSum = max(right.suffixSum, left.suffixSum+right.sum);
    temp.maxSum = max(left.maxSum,max(right.maxSum,(left.suffixSum+right.prefixSum)));
    return temp;
}

void buildTree(int * a, int start, int end, int index, vector<node>& segmentTree){
    if(start == end){
        node temp;
        temp.prefixSum = a[start];
        temp.suffixSum = a[start];
        temp.sum = a[start];
        temp.maxSum = a[start];
        segmentTree[index] = temp;
        indexingArray[start] = index;
        return;
    } else {
        int mid = start+(end-start)/2;
        buildTree(a, start, mid, 2*index+1, segmentTree);
        buildTree(a, mid+1, end, 2*index+2, segmentTree);
        node left = segmentTree[2*index+1];
        node right = segmentTree[2*index+2];
        node temp = combine(left, right);
        segmentTree[index] = temp;

    }
    return;
}

node query(vector<node> &segmentTree, int start, int end, int left, int right, int index){
    if(left > end || right < start){
        node temp;
        return temp;
    }

    if(left <= start && right >= end){
        return segmentTree[index];
    }

    int mid = (start+end)/2;
    if(right <= mid){
        return query(segmentTree, start, mid, left, right, 2*index+1);
    }
    if(left > mid){
        return query(segmentTree, mid+1, end, left, right, 2*index+2);
    }

    node opt1 = query(segmentTree, start, mid, left, right, 2*index+1);
    node opt2 = query(segmentTree, mid+1, end, left, right, 2*index+2);
    return combine(opt1, opt2);
}

void update(int index, int value, vector<node> &segmentTree){
    int indexInSegmentTree = indexingArray[index];
   // cout << indexInSegmentTree << "\n";
    node temp = segmentTree[indexInSegmentTree];
    temp.maxSum = temp.prefixSum = temp.suffixSum = temp.sum = value;
    segmentTree[indexInSegmentTree] = temp;

    indexInSegmentTree-=1;
    indexInSegmentTree/=2;

    while(indexInSegmentTree > 0){
        int l = 2*indexInSegmentTree+1;
        int r = 2*indexInSegmentTree+2;
        //cout << indexInSegmentTree <<" index" << l <<" left" << r <<" right"<<endl;
        segmentTree[indexInSegmentTree] = combine(segmentTree[l], segmentTree[r]);
        indexInSegmentTree-=1;
        indexInSegmentTree/=2;
    }
}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(indexingArray, 0, sizeof(indexingArray));
    int n;
    cin >> n;
    int * a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }



    vector<node>segmentTree(n<<4);
    buildTree(a, 0, n-1, 0, segmentTree);

//    for(int i = 0; i < 2*n-1; i++){
//        cout << segmentTree[i].maxSum << " ";
//    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int opt, l, r;
        cin >> opt >> l >> r;
        if(opt==1){
            node temp = query(segmentTree, 0, n-1, l-1, r-1, 0);
            cout << temp.maxSum << "\n";
        } else {
            int index = l-1, value = r;
            update(index, value, segmentTree);
        }

    }


}
