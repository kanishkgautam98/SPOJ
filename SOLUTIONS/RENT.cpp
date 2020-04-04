//
// Created by kanishk on 29/03/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

class order{
public:
    int start=0, duration=0, price=0;
};

bool compare(order a, order b){
    return a.start+a.duration<b.start+b.duration;
}

ll search(int val, int start, int end, vector<order>v){
    if(start==end){
        return start;
    }
    float mid = (start+end)/2.0;
    mid = ceil(mid);
    order temp = v[mid];
    if(temp.start+temp.duration <= val){
        return search(val, mid, end, v);
    } else {
      return search(val, start, mid-1, v);
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        vector<order>v;
        ll n;
        cin >> n;
        order temp2;
        v.push_back(temp2);
        loop(i, 0, n){
            order temp;
            cin >> temp.start >> temp.duration >> temp.price;
            v.push_back(temp);
        }

        sort(v.begin(), v.end(), compare);
//        loop(i, 0, n+1){
//            cout << v[i].start << " " << v[i].duration << " " << v[i].price<<endl;
//        }cout<<endl;

        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[1] = v[1].price;

        for(int i = 2; i < n+1; i++){
            int next = search(v[i].start, 0, i-1, v);
            if(next==0){
                dp[i] = max(dp[i-1], v[i].price);
            }else{
                dp[i] = max(dp[i-1], v[i].price+dp[next]);
            }
        }

        cout << dp[n] <<"\n";


    }

}

