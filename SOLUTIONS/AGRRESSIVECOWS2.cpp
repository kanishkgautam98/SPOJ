//
// Created by kanishk on 11/12/19.
//
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int * a, int n, int c, int dist){
    long long count = 1, lastcow = a[0];

    for(int i = 1; i < n; i++){
        if(a[i]-lastcow >= dist){
            count++;
            lastcow = a[i];
            if(count==c){
                return true;
            }
        }
    }
    return false;
}




void binarySearch(int * a, int n, int c){
    int start = 0, end = a[n-1]-a[0];

    while(start<end){
        int mid = (start+end)/2;
        if(isPossible(a,n,c,mid)){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    cout << start-1 << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        int * a = new int [n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        binarySearch(a,n,c);
        delete [] a;
    }
    return 0;

}

