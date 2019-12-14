//
// Created by kanishk on 11/12/19.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        float input;
        cin >> input;
        if (!input) {
            break;
        }
        float len =0.00;
        int n = 0;
        while(len<input){
            n++;
            len += (1.00)/(1.00+n);
        }
        cout << n <<" card(s)"<< endl;
    }
}

