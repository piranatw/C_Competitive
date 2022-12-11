#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)
#define decp(x) fixed << setprecision(x)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e5+10;
const ll MAX_LL=1e18;

ll a[10010],b[10100];
void sol(){
    ll n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)   cin >> a[i]; 
    for(int i=1;i<=m;i++)   cin >> b[i];
    int ans=1,i=1,j=1;
    while(i+1 <=n || j+1 <=m){
        if(i+1 <=n && a[i] <= b[j]){
            if(i%2==j%2 && a[i]<b[j]) ans++;
            else if(a[i]!=b[j-1]&&a[i+1]<=b[j])  ans++;
            i++;
        }
        else if(j+1 <= m && b[j] < a[i]){
            if(i%2==j%2 && b[j]<a[i])   ans++;
            else if(b[j]!=a[i-1]&&b[j+1]<=a[i])  ans++;
            j++;
        }
        else break;
    }
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