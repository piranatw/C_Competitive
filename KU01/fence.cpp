#include <bits/stdc++.h>
#define pii pair<int,int>
#define MOD (ll )(1e9+7)

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
const int MAX_INT=1e9,MxN=2e5+10;
const ll MAX_LL=1e18;

int a[1010][1010],mxn[MxN+10],mxm[MxN+10],mnn[MxN+10],mnm[MxN+10];
int dpmini[MxN],dpminj[MxN],dpmaxi[MxN],dpmaxj[MxN];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,q;
    cin >> n >> m >> q;
    for(int i=0;i<MxN;i++)  mnn[i]=mnm[i]=dpmini[i]=dpminj[i]=MxN;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){   
            int b;
            cin >> b;
            mnn[b]=min(mnn[b],i);
            mnm[b]=min(mnm[b],j);
            mxn[b]=max(mxn[b],i);
            mxm[b]=max(mxm[b],j);
        }
    }
    for(int i=MxN-2;i>=0;i--){
        dpmini[i]=min(dpmini[i+1],mnn[i]),dpminj[i]= min(dpminj[i+1],mnm[i]);
        dpmaxi[i]=max(dpmaxi[i+1],mxn[i]),dpmaxj[i]= max(dpmaxj[i+1],mxm[i]);
    }
    while(q--){
        int ch=0,opr,num;
        cin >> opr >> num;
        int hh,ww;
        if(opr==1){
            hh=mxn[num]-mnn[num]+1;
            ww=mxm[num]-mnm[num]+1;
        }
        if(opr==2){
            hh=dpmaxi[num]-dpmini[num]+1;
            ww=dpmaxj[num]-dpminj[num]+1;
        }
        if(hh<=0 || ww <= 0){
            cout << 0;
            continue;
        }
        // cerr << hh << ' ' << ww << '\n';
        cout << (hh+ww)*2 << '\n';
    }
    return 0;
}
/*
5 6 6
0 0 0 2 0 1
0 5 0 0 1 1
0 0 7 5 2 0
0 5 0 0 0 0
0 0 3 0 6 0
1 5
2 2
2 7
1 1
1 4
2 10
*/