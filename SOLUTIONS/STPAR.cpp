//
// Created by kanishk on 12/12/19
// >
#include<bits/stdc++.h>

using namespace std;

bool solution(int *arr, int n) {
    stack<int> s; int min = 1,i;

    for ( i = 0; i < n; i++) {
        if (arr[i] != min) {
            if(s.size() > 0 && s.top() == min){
                s.pop();
                i--;
                min++;
            }
            else if(s.size() > 0 && s.top() < arr[i]){
                return false;
            }
            else{
                s.push(arr[i]);
            }
        }
        else{
            min++;
        }
    }
    return true;
}


int main() {
    while (true) {
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(solution(arr, n)){
            cout <<"yes"<< endl;
        }
        else{
            cout << "no"<<endl;
        }

        delete[] arr;
    }
}

