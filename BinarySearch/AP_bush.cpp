#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e6+10;
const ll MAX_LL=1e18;

int a[MxN];
long long diff(long long x, int ch) {
    if(x < 0)
        return 0;
    if(ch)
        return max(0ll, x * x);
    return max(0ll, x * (x + 1));
}

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        // memset(a,0,sizeof a);
        ll n,h;
        cin >> n >> h;
        for(int i=1;i<=n;i++)   cin >> a[i];
        sort(a+1,a+n+1);
        ll l=0,r=MAX_INT;
        while(l<r){
            ll mid=l+(r-l)/2,ans=(mid+1)*(mid+1);
            for(int i=2;i<=n;i++){
                if(a[i]==a[i-1])    continue;
                ll dis=a[i]-a[i-1]-1;
                ans -= diff(mid - (dis / 2), dis % 2);
                ans +=(mid+1)*(mid+1);
                if(ans >= h)    break;
            }
            if(ans>=h)  r=mid;
            else l=mid+1;
        }
        cout << l << '\n';
    }
    return 0;
}