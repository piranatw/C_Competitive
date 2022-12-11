#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

char n[110];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        int m;
        cin >> n >> m;
        int len=strlen(n);
        int md=len;
        if(len > 6) md=m-1;
        else md=stoi(n);
        ll tmp=1;
        ll ans=1;
        for(int i=1;i<=md;i++){
            tmp=(i*tmp)%m;
            ans+=tmp;
            ans=ans%m;
        }
        cout << (ans)%m << '\n';
    }
    return 0;
}