#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
int a[1010][1010],r[1010],c[1010];
void sol(){
    int n,m,t;
    cin >> n >> m >> t;
    while(t--){
        char opr;
        int num;
        cin >> opr >> num;
        if(opr=='R'){
            r[num]++;
        }
        if(opr=='C'){
            c[num]++;
        }
        r[num]%=2;
        c[num]%=2;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cnt+=(r[i]+c[j])%2;
        }
    }
    cout << cnt << '\n';
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        memset(r,0,sizeof r);
        memset(c,0,sizeof c);
        memset(a,0,sizeof a);
        sol();
    }
    return 0;
}
/*
1 457 R3 C1 C2 R2 R2 C1 R4
*/