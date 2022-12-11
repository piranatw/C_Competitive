#include <bits/stdc++.h>
#define MxN 15000
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int pm[MxN+10],qs[MxN+10],a,b;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    pm[2]=1;
    for(int i=3;i<=MxN;i+=2){
        if(pm[i]==-1) continue;
        for(int j=i*i;j<=MxN;j+=i){
            pm[j]=-1;
        }
        pm[i]=1;
    }
    cin >> a >> b;
    for(int i=1;i<=MxN;i++){
        int ch=0;
        if(pm[i]==1) ch=1;
        qs[i]=qs[i-1]+ch;
    }
    long long ans=0;
    for(int i=a;i<=b;i++){
        for(int j=i;j<=b;j++){
            ans+=qs[i+j+b]-qs[i+(2*j)-1];
        }
    }
    cout << ans << "\n";
    return 0;
}