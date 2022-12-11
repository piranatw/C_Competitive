#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=1e5+10;
const ll MAX_LL=1e18;

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        ll s,m;
        cin >> s >> m;
        ll l=0,r=s/2;
        int ch=0;
        while(l<=r){
            ll mid=l+(r-l)/2,b;
            b=s-mid;
            // cerr << mid << ' ' << b << '\n' << "l=" << l << " r=" << r<< '\n';
            if(b*mid > m || b*mid/b!=mid)   r=mid-1;
            else if(b*mid < m)   l=mid+1;
            else if(mid*b==m){
                ch=1;
                cout << mid << ' ' << b << '\n';
                break;
            }
        }
        if(!ch){
            cout << "No answer" << '\n';
        }
    }
    return 0;
}