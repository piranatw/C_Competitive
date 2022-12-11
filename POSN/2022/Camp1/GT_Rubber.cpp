#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,a,b;
    cin >> q;
    if(q==1){
        int x;
        cin >> x;
        int hr=(x/60)%24,mn=x%60;
        if(hr<=9)   cout << 0;
        cout << hr << ":";
        if(mn<10)   cout << 0;
        cout << mn;
        return 0;
    }
    cin >> a >> b;
    int c=__gcd(a,b);
    int ans=(a*b)/c;
    if(q==2){
        int hr=(ans/60)%24,mn=ans%60;
        if(hr<=9)   cout << 0;
        cout << hr << ":";
        if(mn<10)   cout << 0;
        cout << mn;
        return 0;
    }
    q=q-2;
    while(q--){
        int num;
        cin >> num;
        c=__gcd(ans,num);
        ans=(num*ans)/c;
    }
    int hr=(ans/60)%24,mn=ans%60;
    if(hr<=9)   cout << 0;
    cout << hr << ":";
    if(mn<10)   cout << 0;
    cout << mn;
    return 0;
}