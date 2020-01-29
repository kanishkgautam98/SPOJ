//
// Created by kanishk on 20/01/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0){
            break;
        }

        int * arr = new int [n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool ambiguous = true;
        for(int i = 0; i < n; i++){
            if(arr[arr[i]-1]!=i+1){
                ambiguous = false;
                break;
            }
        }
        if(ambiguous){
            cout << "ambiguous" << endl;
        } else {
            cout << "not ambiguous" << endl;
        }
        delete [] arr;
    }
}
