#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (b < a) swap(a,b);
        int r=((a+b)%2==0)? b*d : (b-1)*d+c;
        cout << min((a+b)*c,min(a*d+(b-a)*c,r)) << '\n';
    }
    return 0;
}
/*
2 
4 5 6 1 
4 5 3 10
*/