#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};

struct A{
    int x,y,q,d;
    bool operator <(const A&o)const{
        if(q!=o.q)  return q<o.q;
        if(q==7 || q==3){
            if(o.x*y!=x*o.y) return abs(o.x*y)>abs(x*o.y);
            return d<o.d;
        }
        if(o.x*y!=x*o.y) return abs(o.x*y)<abs(x*o.y);
        return d<o.d;
    }
}a[100100];

int dis(int i,int j){
    return sqrt(i*i+j*j);
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i].x >> a[i].y;
            if(a[i].x > 0 && a[i].y > 0)    a[i].q=1;
            if(a[i].x < 0 && a[i].y > 0)    a[i].q=3;
            if(a[i].x < 0 && a[i].y < 0)    a[i].q=5;
            if(a[i].x > 0 && a[i].y < 0)    a[i].q=7;
            if(a[i].x > 0 && a[i].y == 0)   a[i].q=0;
            if(a[i].x == 0 && a[i].y > 0)   a[i].q=2;
            if(a[i].x < 0 && a[i].y == 0)   a[i].q=4;
            if(a[i].x == 0 && a[i].y < 0)   a[i].q=6;
            a[i].d=dis(a[i].x,a[i].y);
        }
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            cout << a[i].x << ' ' << a[i].y;
            cout << '\n';
        }
    }
    return 0;
}
/*
1
8
-3 -2 
-3 3 
-5 -5 
1 1 
1 -2 
3 -3 
2 3 
-1 1
*/