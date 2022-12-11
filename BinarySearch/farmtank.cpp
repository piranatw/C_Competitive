#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e6+10;
const ll MAX_LL=1e18;

ll a[MxN];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    ll l=0,r=MAX_LL,mid;
    while(l<r){
        mid=l+(r-l)/2;
        ll sum=0,ans=0;
        for(int i=1;i<=n;i++){
            sum+=mid/a[i];
        }
        if(sum >=m) r=mid;
        else l=mid+1;
    }
    cout << l;
    return 0;
}