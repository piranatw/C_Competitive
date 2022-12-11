#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int mx[100100],a[100100];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,l;
    cin >> n >> l;
    mx[0]=0;
    for(int i=1;i<=n;i++){
        int num; cin >> num;
        a[i]=num;
        mx[i]=max(num,mx[i-1]);
    }
    while(l--){
        int x;
        cin >> x;
        if(mx[x]-a[x]<=0){
            cout << 0 << '\n';
            continue;
        }
        cout << mx[x]-a[x]+1 << '\n';
    }
    return 0;
}