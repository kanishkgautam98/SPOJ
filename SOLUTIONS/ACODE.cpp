#include<bits/stdc++.h>
using namespace std;
int main(){
    int dp[5000];
    while(true){
        string num;
        getline(cin, num);
        if(num[0] =='0'){
            break;
        }

        dp[0]=dp[1]=1;

        for(int i = 2; i <= num.size(); i++){
            dp[i] = 0;
            char c1 = num[i-2]-'0';
            char c2 = num[i-1]-'0';

            if((c1==1)||(c1==2 && c2<=6)){
                dp[i] += dp[i-2];
            }
            if(c2!=0){
                dp[i]+=dp[i-1];
            }


        }

        cout << dp[num.size()] << endl;

    }
    return 0;
}