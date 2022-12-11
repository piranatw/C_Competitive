#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

priority_queue <int> pq;
vector <int> a[100];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int num;    cin >> num;
        pq.push(num);
    }
    // int tmp=0;
    // int tmp=pq.top();
    int tmp=0,ans=0,cnt=0;
    while(!pq.empty()){
        tmp=pq.top();
        pq.pop();
        if(tmp==pq.top()){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans=max(cnt,ans);
    }
    cout << ans << '\n';
    return 0;
}