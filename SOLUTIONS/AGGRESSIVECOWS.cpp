//
// Created by kanishk on 11/12/19.
//
#include<bits/stdc++.h>
using namespace std;

bool ispossible(int * arr, int n, int distance, int c){
    int count = 1; long long lastPlaced = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i]-lastPlaced >= distance){
            count++;
            lastPlaced = arr[i];
            if(count == c){
                return true;
            }
        }
    }
    return false;

}

void solution(int *arr, int n, int c) {
    int start = 0, end = arr[n-1]-arr[0], mid;
    while(start <  end){
        int distance = (end+start)/2;
        if(ispossible(arr, n, distance,  c)){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    cout << start-1 << endl;
    return;

}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        solution(arr, n, c);
        delete[] arr;
    }
}
