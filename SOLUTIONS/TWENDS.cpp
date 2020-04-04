#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)
ll a[1001];
ll dp[1001][1001];

void updateStartEnd(ll start, ll end, ll &newstart, ll &newend){
    if(a[start]>=a[end]){
        newstart=start+1;
        newend = end;
    } else{
        newstart = start;
        newend = end-1;
    }
    return;
}

ll func(ll start, ll end){
    if(dp[start][end]!=-1){
        return dp[start][end];
    }

    if(end-start==1){
        return abs(a[end]-a[start]);
    }

    ll newstart1, newend1, newstart2, newend2;
    updateStartEnd(start+1, end, newstart1, newend1);
    updateStartEnd(start, end-1, newstart2, newend2);

    int opt1 = func(newstart1, newend1) + a[start]-a[(newend1-end)?end:start+1];
    int opt2 = func(newstart2, newend2) + a[end]-a[(newstart2-start)?start:end-1];

    dp[start][end]=max(opt1, opt2);
    return dp[start][end];



}





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    while(true){
        count++;
        memset(a, 0, sizeof(a));
        ll n;
        cin >> n;
        if(n==0){
            break;
        }
        loop(i, 0, n){
            cin >> a[i];
        }

        memset(dp, -1, sizeof(dp));

        ll value = func((ll)0,(ll) n-1);

        cout << "In game "<<count<<", the greedy strategy might lose by as many as "<<value<<" points."<<"\n";

    }

}