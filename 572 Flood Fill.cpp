#include<bits/stdc++.h>
#define pare pair<int,int>
using namespace std;

int koyta,res,ct,cases,n,m,visited[105][105];
char A[105][105];
void dfs(int row,int col){
    //printf("%d %d\n",row ,col);
    int i;
    int dx[10] = {0,0,1,1,1,-1,-1,-1};
    int dy[10] = {1,-1,-1,0,1,-1,1,0};
        if(visited[row][col]==0 && A[row][col]=='@' && row>=0 && row<n && col>=0 && col<m){
            visited[row][col]=1;
            for(i=0; i<8 ;i++){
                dfs(row+dx[i],col+dy[i]);
            }
        }
        else{
            return;
        }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(cin>>n>>m){
            memset(visited ,0,sizeof visited);
        if(n==0 && m==0)break;
        koyta=0;
        for(i=0 ; i<n; i++){
            for(j=0; j<m ;j++){
                cin>>A[i][j];
                //cout<<A[i][j]<<endl;
            }
        }
        for(i=0 ; i<n ; i++){
            for(j=0; j<m ;j++){
                if(A[i][j]=='@' && visited[i][j]==0){
                    koyta++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",koyta);
    }
}
