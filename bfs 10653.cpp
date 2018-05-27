#include<bits/stdc++.h>
#define N 1005
#define ll long long
#define pare pair<int,int>
using namespace std;

int res,ct,cases,n,r,c;
int visited[N][N],path[N][N];
queue<pare>Q;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
int dx[5] ={0,0,1,-1};
int dy[5] ={1,-1,0,0};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
void bfs(int x,int y){
    //printf("dhukse\n");
    visited[x][y] = 1;
    path[x][y] = 0;
    Q.push(pare(x,y));
    while(!Q.empty()){
        pare top = Q.front();
        Q.pop();

        for(int i=0;i<4;i++){
            int row = top.first + dx[i];
            int col = top.second + dy[i];
           if(visited[row][col] == 0 && visited[row][col] !=2 && row>=0 && row < r && col>=0 && col < c ){
                 path[row][col] = path[top.first][top.second] + 1;
                 visited[row][col] = 1;
                 Q.push(pare(row,col));
           }

        }

    }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&r,&c)!=EOF){
        if(r==0 &&  c == 0)break;
        memset(visited,0,sizeof visited);
        memset(path,-1,sizeof path);
        int bomb,a,b,number;
        scanf("%d",&bomb);
        for(int i=0;i<bomb;i++){
            scanf("%d %d",&a,&number);
            while(number--){
                scanf("%d",&b);
                visited[a][b] = 2;
                //printf("bomb ase %d %d\n",a,b);
            }
        }
        int startx,starty,endx,endy;
        scanf("%d %d %d %d",&startx,&starty,&endx,&endy);
        bfs(startx,starty);
        printf("%d\n",path[endx][endy]);
        Q = queue<pare>();
    }
}
