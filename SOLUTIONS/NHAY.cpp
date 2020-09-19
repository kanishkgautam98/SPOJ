//
// Created by kanishk on 08/04/20.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define loop(i, k, n) for(int i = k; i < n; i++)

void computeLPSArray(string pattern, int *lps, int m) {
    int len = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                lps[i] = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void kmpSearch(string pattern, string text) {
    int m = pattern.size();
    int n = text.size();
    int lps[m] = {0};

    computeLPSArray(pattern, lps, m);

    int i = 0;
    int j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << (i - j) << endl;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
    return;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    while (cin >> n) {
        string pattern, text;
        cin >> pattern >> text;
        kmpSearch(pattern, text);
        cout << endl;
    }
}

