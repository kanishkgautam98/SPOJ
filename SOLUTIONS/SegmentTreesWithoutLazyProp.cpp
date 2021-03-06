//
// Created by kanishk on 22/03/20.
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, n) for(int i = 0; i < n; i++)
const int size = 1E5;
ll a[size];
ll st[size<<4];

void buildTree(ll index, ll start, ll end){
    if(start==end){
        st[index] = a[start];
        return;
    }
    ll mid = (start+end)/2;
    buildTree(2*index+1, start, mid);
    buildTree(2*index+2, mid+1, end);
    st[index] = st[2*index+1]+st[2*index+2];
    return;
}

int query(ll start, ll end, ll l, ll r, ll index){
    if(l > end || r < start){
        return 0;
    }
    if(l <= start && end <= r){
        return st[index];
    }

    ll mid = (start+end)/2;
    if(mid < l){
        return query(mid+1, end, l, r, 2*index+2);
    }
    if(mid >= r){
        return query(start, mid, l, r, 2*index+1);
    }
    int opt1 = query(start, mid, l, r, 2*index+1);
    int opt2 = query(mid+1, end, l, r, 2*index+2);
    return opt1+opt2;
}

void update(ll start, ll end, ll l, ll r, ll index, ll value){
    if(start>end || l > end || r < start){
        return;
    }
    if(start == end){
        st[index] += value;
        return;
    }
    ll mid = (start+end)/2;
    update(start, mid, l, r, 2*index+1, value);
    update(mid+1, end, l, r, 2*index+2, value);
    st[index] = st[2*index+1] + st[2*index+2];
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        loop(i, n){
            cin >> a[i];
        }
        buildTree(0, 0, n-1);
//        loop(i, 2*n-1){
//            cout << st[i] <<" ";
//        }
        ll q;
        cin >> q;
        while(q--){
            ll x;
            cin >> x;
            if(x == 0){
                ll l, r, val;
                cin >> l >> r >> val;
                update(0, n-1, l-1, r-1, 0, val);
//                loop(i, 2*n-1){
//                    cout << st[i] <<" ";
//                }
            } else {
                ll l, r;
                cin >> l >> r;
                cout << query(0, n-1, l-1, r-1, 0) << "\n";
            }
        }


    }

}

