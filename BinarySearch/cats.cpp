#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=2e6+10;
const ll MAX_LL=1e18;

int a[MxN];
vector <ll> v;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)   cin >> a[i];
    ll l=0,r=MAX_LL;
    while(l<r){
        ll mid=l+(r-l)/2;
        v.clear();
        for(int i=1;i<=n;i++){
            if(a[i]<=mid)    continue;
            v.push_back(a[i]);
        }
        int ch=0;
        for(int i=0;i<v.size();i+=2){
            if(v[i]!=v[i+1]){
                ch=1;
                break;
            }
        }
        if(ch)  l=mid+1;
        else r=mid;
    }
    cout << l;
    return 0;
}
/*
6 3 3 2 5 5 2
*/