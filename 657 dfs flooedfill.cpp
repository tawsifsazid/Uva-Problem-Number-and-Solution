#include<bits/stdc++.h>
#define N 55
#define ll long long
#define pare pair<int,int>
using namespace std;

int res,ct=0,cases,n,r,c,fl=0,k;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};

int visited[N][N],ans[3025];
char graph[N][N];
int dx[5]  = {0,0,1,-1};
int dy[5] = {1,-1,0,0};
void dfsx(int row,int col){

        if(row>=0 && row<r && col>=0 && col<c && visited[row][col]==0 && graph[row][col]=='X'){
            visited[row][col] = 1;
            //printf("%d %d\n",row,col);
            for(int i = 0 ; i < 4;i++){
                int x = row + dx[i];
                int y = col + dy[i];

                dfsx(x,y);
            }
        }
        else{
            return;
        }


}
void dfs(int row,int col){


        if(row>=0 && row<r && col>=0 && col<c && visited[row][col]==0 && (graph[row][col]=='*' || graph[row][col]=='X')){

            if(graph[row][col] == 'X'){

                dfsx(row,col);
                ans[k] =ans[k] +  1;
            }
             visited[row][col] = 1;
            for(int i = 0 ; i < 4;i++){
                int x = row + dx[i];
                int y = col + dy[i];

                dfs(x,y);
            }
        }
        else{
            return;
        }


}


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&c,&r)!=EOF){
        getchar();
        ct++;
        if(c == 0 && r == 0) break;
       // if(fl > 0){
       //     printf("\n");
       // }
        fl = 1;
        int i,j;
        memset(visited,0,sizeof visited);
        memset(ans,0,sizeof ans);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%c",&graph[i][j]);
            }
            getchar();
        }
        res = 0;
        k = 0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(graph[i][j] == 'X' && visited[i][j]==0){
                    //res =0;
                    dfs(i,j);
                    //printf("back\n");
                    k++;
                }
            }
        }
        sort(ans,ans + k);
        printf("Throw %d\n",ct);
        for(i=0;i<k;i++){
            if(i==0)printf("%d",ans[i]);
            else printf(" %d",ans[i]);
        }
        //if(ans[0]!=0)printf("\n");
        printf("\n\n");
    }
}
