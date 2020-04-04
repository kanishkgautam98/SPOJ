//
// Created by kanishk on 04/04/20.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int count = 0;
    while (t--) {
        count++;
        string input;
        cin >> input;
        string output = "";
        int curmax = 0;
        for (int i = 0; i < input.size(); i++) {
            int temp = input[i] - '0';
            if (temp > curmax) {
                int count = temp - curmax;
                for (int j = 0; j < count; j++) {
                    output += '(';
                }

            } else {
                int count = curmax - temp;
                for (int j = 0; j < count; j++) {
                    output += ')';
                }

            }
            output += input[i];
            curmax = temp;

        }
        while (curmax--) {
            output += ')';

        }
        cout <<"Case #"<<count<<": "<< output << "\n";
    }
}
