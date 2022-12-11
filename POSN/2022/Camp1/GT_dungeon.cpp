#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};

int n,m,l,vis[1001][1001],si,sj,ei,ej;
char a[1001][1001];
int ans=2e9;

void play(int i,int j,int state,int dr,int cnt){
    if(a[i][j]=='e'){
        ans=min(ans,cnt);
        return;
    }
    for(int k=0;k<4;k++){
        int ii=i+di[k],jj=j+dj[k];
        if(ii < 1 || jj < 1 || ii > n || jj > m)    continue;
        if(vis[ii][jj]) continue;
        if(a[ii][jj]=='#')  continue;
        if(dr==k && state+1>l) continue;
        vis[ii][jj]=1;
        if(dr!=k)   play(ii,jj,1,k,cnt+1);
        else    play(ii,jj,state+1,k,cnt+1);
        vis[ii][jj]=0;
    }
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q >> l;
    q=q-1;
    while(q--){
        ans=2e9;
        memset(vis,0,sizeof vis);
        cin >> n >> m;
        for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               cin >> a[i][j];
               if(a[i][j]=='s') si=i,sj=j;
               if(a[i][j]=='e') ei=i,ej=j;
           }
        }
        vis[si][sj]=1;
        play(si,sj,0,-1,0);
        cout << ans << '\n';
    }
    return 0;
}
/*
3 1 
3 3 
..e 
... 
s.. 
5 5 
s.#.e 
..#.. 
..#.. 
..... 
.....
*/