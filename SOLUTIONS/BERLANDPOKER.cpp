//
// Created by kanishk on 28/05/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int cardPerPerson = n/k;
        if(m <= cardPerPerson){
            cout << m << "\n";
            continue;
        }

        m-=cardPerPerson;
        int count = 0, temp = k-1;
        while(m>0){
            m-=temp;
            count++;
        }

        cout << cardPerPerson - count << "\n";
    }

}

