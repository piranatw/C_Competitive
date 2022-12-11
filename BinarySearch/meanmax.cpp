#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)
#define decp(x) fixed << setprecision(x)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e6+10;
const ll MAX_LL=1e18;

double a[MxN],qs[MxN],dp[MxN];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
       cin >> a[i];
       qs[i]=qs[i-1]+a[i];
    }
    double l=0,r=2e9;
    while(r-l>1e-6){
        int ch=0;
        double mid=l+(r-l)/2;
        for(int i=1;i<=n;i++){
            dp[i]=min(dp[i-1],qs[i]-i*mid);
            if(i >= k && qs[i]-(i*mid)-dp[i-k] > 1e-6){
                ch=1;
                break;
            }
        }
        if(ch) l=mid;
        else r=mid;
    }
    cout << decp(x) << l;
    return 0;
}