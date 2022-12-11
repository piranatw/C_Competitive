#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)
#define decp(x) fixed << setprecision(x)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e5+10;
const ll MAX_LL=1e18;

int dp[10][60][60];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        int n,m;    cin >> n >> m;
        memset(dp,0,sizeof dp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int num;
                cin >> num;
                dp[num][i][j]++;
                for(int k=0;k<=9;k++){
                    dp[k][i][j]+=dp[k][i-1][j]+dp[k][i][j-1]-dp[k][i-1][j-1];
                }
            }
        }
        int ans=0,cnt=0;
        for(int i=5;i<=n;i++){
            for(int j=5;j<=m;j++){
                cnt=0;
                for(int k=0;k<=9;k++){
                    if(dp[k][i][j]-(dp[k][i-5][j]+dp[k][i][j-5]-dp[k][i-5][j-5])>0) cnt++;
                }
                if(cnt >=5) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
/*
3
6 6
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0
6 6
0 0 0 0 0 0 
0 1 1 1 0 0 
0 1 1 0 3 0 
0 1 0 4 3 0 
0 3 3 3 3 0 
0 0 0 0 0 2
10 12 
0 0 0 0 0 0 0 0 0 0 0 0 
0 1 0 0 0 0 0 0 0 0 0 0 
0 0 2 0 0 0 0 0 5 0 0 0 
0 0 0 3 0 0 0 0 6 0 0 0 
0 0 0 0 3 0 0 0 0 0 0 0 
0 0 0 0 3 9 0 9 9 9 9 9 
0 0 0 0 0 0 0 9 9 9 9 9 
0 0 0 0 0 0 0 9 9 9 9 9 
0 0 0 0 0 0 0 9 9 9 9 9 
0 0 0 0 0 0 0 9 9 9 9 9
*/