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

int k,res=0,ct,cases,n,A[20][20],flag[20][20];
int ispossible(int row,int x,int y){
    //printf("possible kina %d %d\n",x,y);
    int u=0,i,j;
    for(i=1;i<=row-1;i++){
            //printf("dhkukse\n");
        for(j=1;j<=8;j++){
           if(flag[i][j]==1){
                //printf("dhukse");
            if((x==i || y==j)||(abs(x-i)==abs(y-j))){
                u=1;
                //printf("somvob na\n");
                return 0;
            }
           }
        }
    }
    return 1;
    //if(u==1)return 0;

}
void tri(int a){
   int i,j;
   if(a==8+1){
        int temp=0;
        for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                 if(flag[i][j]==1){
                    //printf("%d ",A[i][j]);
                    temp=temp+A[i][j];
                 }
            }
           //printf("\n");
        }
        if(temp>res){
            res=temp;
        }
        //res=max(res,temp);
        //return;
   }
   else{
            for(j=1;j<=8;j++){
                if(flag[a][j]==0){
                    if(ispossible(a,a,j)){
                        flag[a][j]=1;
                        tri(a+1);
                        flag[a][j]=0;
                    }

                }
            }

   }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    scanf("%d",&k);
    while(k--){
        res=0;
        for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                scanf("%d",&A[i][j]);
                flag[i][j]=0;
            }
        }
        tri(1);
        printf("%5d\n",res);
    }

}
