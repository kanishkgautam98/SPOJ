//
// Created by kanishk on 13/12/19.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    int scenario;
    for(scenario = 1; scenario <= t; scenario++){
        int stamps, friends;
        cin >> stamps >> friends;
        priority_queue<int>p;

        for(int i = 0; i < friends; i++){
            int temp;
            cin >> temp;
            p.push(temp);
        }

        int sum = 0;
        int friendsCount = 0;
        while(!p.empty() && sum < stamps){
            sum += p.top();
            friendsCount++;
            p.pop();
        }
        cout << "Scenario #"<< scenario <<":\n";
        if(sum >= stamps){
            cout << friendsCount << endl;
        } else {
            cout << "impossible" << endl;
        }

    }
    return 0;
}
