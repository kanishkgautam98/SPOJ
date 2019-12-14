//
// Created by kanishk on 13/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        double input;
        cin >> input;
        if(input == 0){
            break;
        }
        double ans = (input*input*M_1_PI)/2;
        printf("%.2f \n", ans);
    }
}
