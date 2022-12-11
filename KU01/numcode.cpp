#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[MxN];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,t,m;
    cin >> n >> t;
    m=n;
    if(t==1){
        for(int i=1;i<=m;i++){
            int num; cin >> num;
            if(num > n){
                a[i]=1;
                n=num;
                continue;
            }
            a[i]=0;
            n=num;
        }
        // cerr << a[10] << 's' << '\n';
        for(int i=1;i<=m;i++){
            cout << a[i] << '\n';
        }
        return 0;
    }
    if(t==2){
        for(int i=1;i<=m;i++){
            int num; cin >> num;
            if(i==1){
                if(num > n) a[i]=1;
                else a[i]=0;
                n=num;
                continue;
            }
            if(num == 3*n + 1){
                a[i]=1;
                n=n+1;
                continue;
            }
            a[i]=0;
            n-=1;
        }
        for(int i=1;i<=m;i++){
            cout << a[i] << '\n';
        }
        return 0;
    }
    return 0;
}
/*
10 2
9
28
19
17
25
17
25
28
19
28
*/