#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll= long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100100];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n,s;
    cin >> n >> s;
    int amx=0,amn=0;
    while(n--){
        int h;
        cin >> h;
        if(h%3==0 && h%4==0){
            amx+=(h/3)*10;
            amn+=(h/4)*10;
        }
        else if(h%3==0){
            amx+=(h/3)*10;
            amn+=(h/3)*10;
        }
        else if(h%4==0){
            amx+=(h/4)*10;
            amn+=(h/4)*10;
        }
    }
    cout << s-amx << ' ' << s-amn << '\n';
    return 0;
}