#include <bits/stdc++.h>
#define all(a) a.begin(),a.end()
#define pii pair<int,int>

using namespace std;
using ll = long long;

const int N=1e5+10,M=1e6+10;
const int di[8]={1,-1,0,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};

struct A{
    
};

int a[1010],b[1010];

void sol(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
    int a1=a[1],b1=b[1],cnt=0;
    for(int i=2;i<=n;i++){
        int a2=a[i],b2=b[i];
        int mna=min(a1,a2),mxa=max(a1,a2);
        int mnb=min(b1,b2),mxb=max(b1,b2);
        if(mna<mnb && mnb<mxa && mxa<mxb) cnt++;
        else if(mnb<mna && mna<mxb && mxb<mxa) cnt++;
        else if(mxa==mxb && mna==mnb) cnt++;
        a1=a2,b1=b2;
    }
    cout << cnt << "\n";
    return ;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int q=1;
    // cin >> q;
    while(q--){
        sol();
    }
    return 0;
}
