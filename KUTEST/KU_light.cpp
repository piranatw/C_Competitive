#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)
#define decp(x) fixed << setprecision(x)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e5+10;
const ll MAX_LL=1e18;

int a[100100];

void sol(){
    int t,ans=0;
    cin >> t;
    for(int i=1;i<=t;i++)   cin >> a[i];
    sort(a+1,a+t+1);
    for(int i=1;i<=t;i++)   a[i]+=a[i-1];
    for(int i=1;i<=t;i++)   ans+=a[i]*2;
    cout << ans << '\n';
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        sol();
    }
    return 0;
}