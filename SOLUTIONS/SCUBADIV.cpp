//
// Created by kanishk on 02/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define loop(i, k, n) for(int i = k; i < n; i++)

int oxygen[1024];
int nitrogen[1024];
int weight[1024];
int dp[1024][1024][1024];

int func(int i, int oxy , int nitro, int n){
    if(dp[i][oxy][nitro] != -1){
        return dp[i][oxy][nitro];
    }

    if(oxy<=0 && nitro <= 0){
        return 0;
    } else if(i==n){
        return INT_MAX;
    } else{
        dp[i][oxy][nitro] = min(func(i+1, oxy, nitro, n), func(i+1, min(oxy-oxygen[i], 0),
                min(nitro-nitrogen[i], 0), n)+weight[i]);
    }
    return dp[i][oxy][nitro];
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int O, N, n;
        cin >> O >> N;
        cin >> n;
        loop(i, 0, n+1){
            loop(j, 0, O+1){
                loop(k, 0, N+1){
                    dp[i][j][k]=-1;
                }
            }
        }
        loop(i, 0, n){
            scanf("%d %d %d", &oxygen[i], &nitrogen[i], &weight[i]);
        }

        cout << func(n, O, N, n) << "\n";



    }
}

