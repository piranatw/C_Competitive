#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int n,c,a[50][50];
vector<int> ans[100];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> n >> c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++) ans[1].push_back(i);
    int ch=1;
    for(int i=1;i<=log2(n);i++){
        for(int j=0;j<ans[i].size();j+=2){
            int p1=ans[i][j],p2=ans[i][j+1];
            if((p1==c || p2==c) && a[p1][p2]!=c && ch){
                ans[i+1].push_back(c);
                ch=0;
                continue;
            }
            ans[i+1].push_back(a[p1][p2]);
        }
    }
    int idx=(int)log2(n);
    cout << ans[idx+1][0] << "\n";
    return 0;
}
