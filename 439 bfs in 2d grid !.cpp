#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#define pare pair<int,int>
using namespace std;

int v,i,j,k,res,ct,cases,n,n1,n2,visited[100][100],path[100][100],row=8,column=8,startx,starty,endx,endy;
char ch1,ch2,ch,st[6];
int dx[]={-1,-1,+1,+1,-2,-2,+2,+2};
int dy[]={-2,+2,-2,+2,-1,+1,-1,+1};
//pair<int,int>p;
int bfs(int x,int y){
    visited[x][y]=1;
    path[x][y]=0;
    queue<pare>Q;
    Q.push(pare(x,y));
    while(!Q.empty()){
        pare top=Q.front();
        //cout<<top.second<<endl;
        Q.pop();
        for(i=0;i<8;i++){
            int fx=top.first + dx[i];
            int fy=top.second + dy[i];
            if(fx>=1 && fx<=8 && fy>=1 && fy<=8 && visited[fx][fy]==0){
                visited[fx][fy]=1;
                path[fx][fy]=path[top.first][top.second]+1;
                //cout<<"knight ase"<<" "<<fx<<" "<<fy<<" "<<"a"<<endl;
                Q.push(pare(fx,fy));
            }
        }
    }
    int r=path[endx][endy];
    return r;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(st)){
         startx=st[0]-96;
         starty=st[1]-48;
         endx=st[3]-96;
         endy=st[4]-48;
        for(i=0;i<=10;i++){
            for(j=0;j<=10;j++){
                visited[i][j]=0;
                path[i][j]=0;
            }
        }
        res=bfs(startx,starty);
        printf("To get from %c%c to %c%c takes %d knight moves.\n",st[0],(st[1]),st[3],(st[4]),res);
        //printf("%d %d and %d %d\n",startx,starty,endx,endy);
    }
}
