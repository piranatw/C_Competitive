#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9;
const ll MAX_LL=1e18;

int a[20010];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,s,last,ans=1;
    cin >> n >> s;
    for(int i=1;i<=n;i++)   cin >> a[i];
    while(1){
        if(a[s]==0||a[s]==-1) break;
        last=s;
        s=a[s];
        a[last]=-1;
        if(a[s]!=-1) ans++;
    }
    cout << ans;
    return 0;
}