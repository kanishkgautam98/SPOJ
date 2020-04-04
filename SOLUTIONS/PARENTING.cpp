//
// Created by kanishk on 04/04/20.
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

class duration{
public:
    int start;
    int end;
    int index;
};

bool comp(duration a, duration b){
   return a.start<b.start;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        count++;
        int n;
        cin >> n;
        vector<duration>v;
        loop(i, 0, n){
            int s, e;
            cin >> s >> e;
            duration temp;
            temp.start = s;
            temp.end = e;
            temp.index = i;
            v.push_back(temp);
        }

        sort(v.begin(), v.end(), comp);

        string ans(n,' ');
        bool possible = true;
        int Jend = -1, Cend=-1;

//        loop(i, 0, n){
//            cout << v[i].start<<" "<<v[i].end<<endl;
//        }

        loop(i, 0, n){
            if(Cend <= v[i].start){
                ans[v[i].index] = 'C';
                Cend = v[i].end;
            } else if(Jend <= v[i].start){
                ans[v[i].index] = 'J';
                Jend = v[i].end;
            } else{
                possible = false;
                break;
            }
        }

        if(possible){
            cout << "Case #"<<count<<": "<<ans<<"\n";
        } else{
            cout << "Case #"<<count<<": "<<"IMPOSSIBLE"<<"\n";
        }
    }

}
