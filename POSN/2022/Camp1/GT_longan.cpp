#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

char a[1001000];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        cin >> a;
        int len=strlen(a);
        if(len==1&&a[0]=='0'){    
            cout << 0 << '\n';
            continue;
        }
        int cnt=0,ch=0;
        for(int i=len-1;i>=0;i--){
            if(a[i]=='0'){
                ch=1;
                cout << 1;
            }
            else{
                break;
            }
        }
        if(!ch) cout << 0;
        cout << '\n';
    }
    return 0;
}