//
// Created by kanishk on 17/01/20.
//
#include<bits/stdc++.h>

using namespace std;


bool isPossibleHelper(int **matrix, bool** visited, int n, int m, int sx, int sy, int k, int pos, int x, int y) {
    if(visited[x][y]){
        if(pos >= k && x == sx && y == sy){
            return true;
        } else {
            return false;
        }

    }

    visited[x][y] = true;

    int dr[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};

    for(int i = 0; i < 4; i++){
        int ix = x + dr[i];
        int iy = y + dy[i];

        if(ix >=0 && ix < n && iy >=0 && iy < m && matrix[ix][iy]== 1){
            if(isPossibleHelper(matrix, visited, n, m, sx, sy, k, pos+1, ix, iy)){
                return true;
            }
        }
    }
    visited[x][y] = false;
    return false;
}


bool possible(int **matrix, int n, int m, int sx, int sy, int k) {
    bool **visited = new bool *[n];
    for (int i = 0; i < m; i++) {
        visited[i] = new bool[m]{false};
    }
    return isPossibleHelper(matrix, visited, n, m, sx, sy, k, 0, sx, sy);

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.ignore(NULL);
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    int sx, sy;
    cin >> sx >> sy;
    sx = sx-1;
    sy = sy-1;
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char input;
            cin.clear();
            cin >> input;
            if (input == '.') {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    if(k==1 || possible(matrix, n, m, sx, sy, k)) {
        cout << "YES"<< endl;
    } else{
        cout << "NO" << endl;
    }


    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
