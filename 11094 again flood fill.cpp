#include<bits/stdc++.h>
#define N 25
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,m;
//int dxq[10] = {-1,-1,-1,1,1,1,0,0};
// int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
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
int visited[N][N];
char A[N][N],ch;
int dx[10]={0,0};
int dy[10]={-1,1};
int dfs(int x,int y){
    //printf("%d %d\n",x,y);
    int ret;
    if(y==-1) y=m-1;
    else if(y == m) y =0;
    if(x<0 || x>=n || y<0 || y>=m)return 0;
    if(visited[x][y])return 0;
    if(A[x][y] != ch) return 0;
    ret=1;
    visited[x][y] = 1;
    ret = ret+ dfs(x,y-1);
    ret = ret+ dfs(x,y+1);
    ret = ret+ dfs(x+1,y);
    ret = ret+ dfs(x-1,y);
    return ret;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        getchar();
        int i,j,k,res;
        memset(A,0,sizeof A);
        res = 0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%c",&A[i][j]);
                //printf("%c",A[i][j]);
                //getchar();
            }
            //printf("\n");
            getchar();
        }
        int x,y;
        scanf("%d %d",&x,&y);
        ch = A[x][y];
        ///printf("%c\n",A[x][y]);
        memset(visited,0,sizeof visited);
        int fl = 0;
        int ans=0;
        dfs(x,y);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i][j]==ch){
                    //printf("hgh\n");
                    //visited[i][j]=1;
                    res=dfs(i,j);
                   if(res>ans)ans = res;
                }
            }
        }
        printf("%d\n",ans);
    }
}
