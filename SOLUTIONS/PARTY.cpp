//
// Created by kanishk on 26/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

class party{
public:
    ll cost = 0;
    ll fun = 0;
};

bool comp(party a, party b){
    return a.cost<b.cost;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll budget, n;
    cin >> budget >> n;
    set<ll>s;
    vector<party>v;

    loop(i, 0, n){
        ll cost, fun;
        cin >> cost >> fun;
        if(s.find(cost)!=s.end()){
            for(auto itr = v.begin(); itr!= v.end(); i++){
                if(itr->cost == cost){
                    itr->fun = (itr->fun>fun)?itr->fun:fun;
                    break;
                }
            }
        }
        party temp;
        temp.cost = cost;
        temp.fun = fun;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), comp);




}