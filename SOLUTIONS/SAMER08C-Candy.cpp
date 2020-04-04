//
// Created by kanishk on 02/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

ll func(ll * array, int n){
    int a = 0, b = array[0], c;

    if(n==1){
        return array[0];
    }
    loop(i, 1, n){
        c = (b>a+array[i])?b:a+array[i];
        a = b;
        b = c;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        if(n==0 || m==0){
            break;
        }
        loop(i, 0, n){
            loop(j, 0, m){
                cin >> arr[i][j];
            }
        }
        ll final[n];
        loop(i, 0, n){
            ll temp[m];
            loop(j, 0, m){
                temp[j] = arr[i][j];
            }
            final[i] = func(temp, m);
        }

        cout << func(final, n) << endl;
    }
}

