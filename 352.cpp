#include<bits/stdc++.h>

using namespace std;

int k,res,ct=0,cases,n,visited[250][250];
int dx[10] = {1,1,1,0,0,-1,-1,-1};
int dy[10] = {1,0,-1,1,-1,1,0,-1};
char A[250][250];
int isvalid(int x,int y){
    int i,j;

    if(x<n && x>=0 && y<n && y>=0 && visited[x][y]==0 && A[x][y]=='1'){
        //printf("%d %d\n",x,y);
        return 1;
    }
    else{
        return 0;
    }
}
void dfs(int row,int col){
    int i,j,x,y;
    visited[row][col]=1;
        for(i=0;i<8;i++){
             x = row + dx[i];
             y = col + dy[i];
             //printf("checking %d %d\n",x,y);
            if(isvalid(x,y)){
                //printf("dhukse valid %d %d\n",x,y);
                visited[x][y]=1;
                dfs(x,y);
            }
        }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(cin>>n){
       ct++;
        memset(visited,0,sizeof visited);
       for(i=0;i<n;i++){
          for(j=0;j<n;j++){
                //printf("dshuks\n");
            cin>>A[i][j];
          }
       }
       res=0;
       for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                //printf("%d",A[i][j]);
                if(visited[i][j]==0 && A[i][j]=='1'){
                   // printf("dhukse %d %d\n",i,j);
                    //printf("now %d %d\n",i,j);
                    res++;
                    dfs(i,j);
                    //printf("%d %d\n",i,j);
                }
            }
       }
       printf("Image number %d contains %d war eagles.\n",ct,res);
    }
}
