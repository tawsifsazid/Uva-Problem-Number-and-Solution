#include<bits/stdc++.h>

using namespace std;

int k,res,ct=0,cases,n,black,white;
char A[250][250];
int visited[250][250];
void dfsblack(int row,int col){
     //printf("Asdsad %d\n",n);
    int dx[9] = {0,0,1,1,-1,-1};
    int dy[9] = {-1,1,1,0,0,-1};
    int i,j;
    if(visited[row][col]==0 && row>=0 && row<n && col>=0 && col<n && A[row][col]=='b'){
        visited[row][col]=1;
        if(row==n-1)black=1;
        //printf("black ekhon %d %d\n",row,col);
        for(i=0;i<6;i++){
            dfsblack(row+dx[i],col+dy[i]);
          // printf("back korlo %d %d\n",row,col);
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
    while(cin>>n){
            black=0;
            white=0;
            if(n==0)break;
       ct++;
       //printf("%d\n",n);
        //for(i=0;)
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
                if(visited[i][j]==0 && A[i][j]=='b' && i==0){
                    //printf("dhukse %d %d\n",i,j);
                    res++;
                    dfsblack(i,j);
                    //printf("%d %d\n",i,j);
                }
            }
       }
            if(black==1)cout<<ct<<" "<<"B"<<endl;
            else{
               cout<<ct<<" "<<"W"<<endl;
            }
       }
}

