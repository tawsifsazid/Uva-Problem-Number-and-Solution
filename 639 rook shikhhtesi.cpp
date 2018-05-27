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

using namespace std;

int res,ct,cases,n;
char A[10][10];
int check(int row,int column){
    int i,j;
    for(i=0;i<n;i++){
        if(A[i][column]=='X'){
            break;
        }
        else if(A[i][column]=='r'){
            return 0;
        }
    }
    for(i=0;i<n;i++){
        if(A[row][i]=='X'){
            break;
        }
        else if(A[row][i]=='r'){
            return 0;
        }
    }
    return 1;
}
void tri(int tot){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]=='.'){
                if(check(i,j)){
                    A[i][j]='r';
                    tri(tot+1);
                    A[i][j]='.';
                }
            }
        }
    }
    if(res<tot)res=tot;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        for(i=0;i<n;i++){
            scanf("%s",A[i]);
        }
        res=0;
        tri(0);
        printf("%d\n",res);
    }
}
