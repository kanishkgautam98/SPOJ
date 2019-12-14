#include<bits/stdc++.h>
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin.ignore(1000,'\n');
        string s1, s2, s3, s4, s5;
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
        int a=0,b=0,c=0;
        size_t first = s1.find("machula");
        size_t second = s3.find("machula");
        size_t third =  s5.find("machula");

        if(first != string::npos){
            c = stoi(s5);
            b = stoi(s3);
            a = c-b;
        } else if (second != string::npos){
            c = stoi(s5);
            a = stoi(s1);
            b = c - a;
        } else if (third != string::npos){
            b = stoi(s3);
            a = stoi(s1);
            c = a+b;
        }
        cout << a << " + "<< b << " = " << c << endl;

    }

}