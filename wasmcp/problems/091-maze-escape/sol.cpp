#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    int c;
    cin >> r;
    cin >> c;
    cin.ignore();
    vector<string> grid(r);
    for(int i = 0; i < r; i++){
        string row;
        getline(cin, row);
        grid[i] = row;
    }
    int sr = 0;
    int sc = 0;
    int er = 0;
    int ec = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == 'S'){
                sr = i;
                sc = j;
            }
            if(grid[i][j] == 'E'){
                er = i;
                ec = j;
            }
        }
    }
    vector<vector<int>> dist(r, vector<int>(c, -1));
    dist[sr][sc] = 0;
    deque<int> qx;
    deque<int> qy;
    qx.push_back(sr);
    qy.push_back(sc);
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    while(!qx.empty()){
        int x = qx.front();
        int y = qy.front();
        qx.pop_front();
        qy.pop_front();
        for(int d = 0; d < 4; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx >= 0 && nx < r && ny >= 0 && ny < c && grid[nx][ny] != '#' && dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                qx.push_back(nx);
                qy.push_back(ny);
            }
        }
    }
    cout << dist[er][ec] << endl;
    return 0;
}
