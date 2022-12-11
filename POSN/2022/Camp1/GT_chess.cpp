#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii(a,b) pair<int a,int b>

using namespace std;
using ll=long long;
const int di[10]={1,-1,0,0,1,-1,1,-1},dj[10]={0,0,1,-1,1,1,-1,-1};

char a[100][100];

char dir(int i,int j,int dr){
    int ii=i,jj=j;
    for(;;){
        ii+=di[dr],jj+=dj[dr];
        if(ii<1 || jj < 1 || ii > 8 || jj > 8)  return 0;
        // dir(ii,jj,dr);
        if(a[ii][jj]!='.') return a[ii][jj];
    }
}
void sol(int i){
    if(i==1)    cout << 'p';
    if(i==2)    cout << 'P';
    if(i==3)    cout << 'r';
    if(i==4)    cout << 'R';
    if(i==5)    cout << 'b';
    if(i==6)    cout << 'B';
    if(i==7)    cout << 'q';
    if(i==8)    cout << 'Q';
    if(i==9)    cout << 'k';
    if(i==10)   cout << 'K';
    if(i==11)   cout << 'n';
    if(i==12)   cout << 'N';
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin >> a[i][j];
            }
        }
        // cout << "alsd";
        int ch=0;
        for(int i=1;i<=8 && ch==0;i++){
            for(int j=1;j<=8&&ch==0;j++){
                if(a[i][j]=='p'){
                    char p1=a[i+1][j-1],p2=a[i+1][j+1];
                    if(p1=='K' || p2=='K')  ch=1;
                }
                if(a[i][j]=='P'){
                    char p1=a[i-1][j-1],p2=a[i-1][j+1];
                    if(p1=='k' || p2=='k')  ch=2;
                }
                if(a[i][j]=='r'){
                    char p1= dir(i,j,0) , p2=dir(i,j,1) , p3=dir(i,j,3) , p4=dir(i,j,2);
                    if(p1=='K' || p2=='K' || p3=='K' || p4=='K')    ch=3;
                }
                if(a[i][j]=='R'){
                    char p1= dir(i,j,0) , p2=dir(i,j,1) , p3=dir(i,j,3) , p4=dir(i,j,2);
                    if(p1=='k' || p2=='k' || p3=='k' || p4=='k')    ch=4;
                }
                if(a[i][j]=='b'){
                    char p1= dir(i,j,4) , p2=dir(i,j,5) , p3=dir(i,j,6) , p4=dir(i,j,7);
                    if(p1=='K' || p2=='K' || p3=='K' || p4=='K')    ch=5;
                }
                if(a[i][j]=='B'){
                    char p1= dir(i,j,4) , p2=dir(i,j,5) , p3=dir(i,j,6) , p4=dir(i,j,7);
                    if(p1=='k' || p2=='k' || p3=='k' || p4=='k')    ch=6;
                }
                if(a[i][j]=='q'){
                    char p1= dir(i,j,0) , p2=dir(i,j,1) , p3=dir(i,j,3) , p4=dir(i,j,2);
                    char p5= dir(i,j,4) , p6=dir(i,j,5) , p7=dir(i,j,6) , p8=dir(i,j,7);
                    if(p1=='K' || p2=='K' || p3=='K' || p4=='K')    ch=7;
                    if(p5=='K' || p6=='K' || p7=='K' || p8=='K')    ch=7;
                }
                if(a[i][j]=='Q'){
                    char p1= dir(i,j,0) , p2=dir(i,j,1) , p3=dir(i,j,3) , p4=dir(i,j,2);
                    char p5= dir(i,j,4) , p6=dir(i,j,5) , p7=dir(i,j,6) , p8=dir(i,j,7);
                    if(p1=='k' || p2=='k' || p3=='k' || p4=='k')    ch=8;
                    if(p5=='k' || p6=='k' || p7=='k' || p8=='k')    ch=8;
                }
                if(a[i][j]=='k'){
                    char p1=a[i-1][j],p2=a[i-1][j+1],p3=a[i-1][j-1],p4=a[i][j+1],p5=a[i][j-1],p6=a[i+1][j],p7=a[i+1][j-1],p8=a[i+1][j+1];
                    if(p1=='K' || p2=='K' || p3=='K' || p4=='K')    ch=9;
                    if(p5=='K' || p6=='K' || p7=='K' || p8=='K')    ch=9;
                }
                if(a[i][j]=='K'){
                    char p1=a[i-1][j],p2=a[i-1][j+1],p3=a[i-1][j-1],p4=a[i][j+1],p5=a[i][j-1],p6=a[i+1][j],p7=a[i+1][j-1],p8=a[i+1][j+1];
                    if(p1=='k' || p2=='k' || p3=='k' || p4=='k')    ch=10;
                    if(p5=='k' || p6=='k' || p7=='k' || p8=='k')    ch=10;
                }
                if(a[i][j]=='n'){
                    char p1=a[i-1][j-2],p2=a[i-1][j+2],p3=a[i-2][j+1],p4=a[i-2][j-1],p5=a[i+1][j-2],p6=a[i+1][j+2],p7=a[i+2][j-1],p8=a[i+2][j+1];
                    if(p1=='K' || p2=='K' || p3=='K' || p4=='K')    ch=11;
                    if(p5=='K' || p6=='K' || p7=='K' || p8=='K')    ch=11;
                }
                if(a[i][j]=='N'){
                    char p1=a[i-1][j-2],p2=a[i-1][j+2],p3=a[i-2][j+1],p4=a[i-2][j-1],p5=a[i+1][j-2],p6=a[i+1][j+2],p7=a[i+2][j-1],p8=a[i+2][j+1];
                    if(p1=='k' || p2=='k' || p3=='k' || p4=='k')    ch=12;
                    if(p5=='k' || p6=='k' || p7=='k' || p8=='k')    ch=12;
                }
                // cerr << "asd" << i << ' '<< j << ' ';
                // cout << j;
            }
            // cout << i <<' ';
        }
        if(!ch){
            cout << "No king is in check." << '\n';
            continue;
        }
        sol(ch);
        if(ch%2==1){
            cout << " check white king." << '\n';
        }
        else{
            cout << " check black king." << '\n';
        }
    }
    return 0;
}
/*
3
..k.....
ppp.pppp
........
.R...B..
........
........
PPPPPPPP
K.......
rnbqkbnr
pppppppp
........
........
........
........
PPPPPPPP
RNBQKBNR
rnbqk.nr
ppp..ppp
....p...
...p....
.bPP....
.....N..
PP..PPPP
RNBQKB.R
*/