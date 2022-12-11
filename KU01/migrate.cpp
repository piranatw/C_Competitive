#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int n,m,L,C,D,A,B;
char a[1001][1001];
int vis[1001][1001];
int ch=0;

void dfs(int i,int j){
    if(i == C && j == D){
        ch=1;
        return;
    }
    for(int k=0;k<4;k++){
        int ii=i+di[k],jj=dj[k]+j;
        if(a[ii][jj]=='#')  continue;
        if(ii < 1 || jj < 1 || ii > n || jj > m)    continue;
        if(vis[ii][jj]) continue;
        if(abs(ii-A) > L )  continue;
        vis[ii][jj]=1;
        dfs(ii,jj);
    }
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    // int A,B,C,D,L;
    while(q--){
        ch=0;
        memset(vis,0,sizeof vis);
        cin >> A >> B >> C >> D >> L;
        vis[A][B]=1;
        dfs(A,B);
        if(ch==0) cout << "0" << '\n';
        else cout << "1" << '\n';   
    }
    return 0;
}
/*
6 10 5 
##......## 
##.####.## 
#....##... 
#.##....## 
..####.### 
##...#...# 
5 1 3 10 10
 5 1 6 3 10 
 5 1 6 9 1 
 5 1 6 9 2 
 4 2 3 9 2
*/