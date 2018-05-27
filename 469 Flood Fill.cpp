#include<bits/stdc++.h>
#define pare pair<int,int>
using namespace std;

int koyta,res,ct,cases,n,m,visited[105][105];
char A[105][105],str[200];
void dfs(int row,int col,int rows){
    //printf("%d %d\n",row ,col);
    int len=strlen(A[0]);
    int i;
    int dx[10] = {0,0,1,1,1,-1,-1,-1};
    int dy[10] = {1,-1,-1,0,1,-1,1,0};
        if(visited[row][col]==0 && A[row][col]=='W' && row>=0 && row<rows && col>=0 && col<len){
            visited[row][col]=1;
            koyta++;
            for(i=0; i<8 ;i++){
                dfs(row+dx[i],col+dy[i],rows);
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
    scanf("%d",&cases);
    getchar();
    getchar();
    while(cases--){
            i=0;
            memset(A,0,sizeof A);
            while(gets(str)){
                if(str[0]==NULL)break;
                if(str[0]=='L' || str[0]=='W'){
                    sscanf(str,"%s",A[i]);
                    i++;
                }
                else{
                    sscanf(str,"%d %d",&n,&m);
                    koyta=0;
                    memset(visited ,0,sizeof visited);
                    dfs(n-1,m-1,i);
                    printf("%d\n",koyta);
                }
            }
            if(cases){
                printf("\n");
                //getchar();
            }
    }
}
