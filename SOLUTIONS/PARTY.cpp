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

    while(true){
    ll budget, n;
    cin >> budget >> n;
    if(budget == 0 && n == 0){
        break;
    }
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
        } else {
            party temp;
            temp.cost = cost;
            temp.fun = fun;
            s.insert(cost);
            v.push_back(temp);
        }

    }

    sort(v.begin(), v.end(), comp);

    loop(i, 0, v.size()){
        cout << v[i].cost << " " << v[i].fun << endl;
    }

    ll dp[v.size()+1][budget+1];
    memset(dp, 0, sizeof(dp));

    loop(i, 1, v.size()+1){
        loop(j, 1, v.size()+1){
            if(j>=v[i].cost){
                dp[i][j] = max(dp[i-1][j], dp[i-i][j-v[i].cost] + v[i].fun);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[v.size()][v.size()] << "\n";}

}