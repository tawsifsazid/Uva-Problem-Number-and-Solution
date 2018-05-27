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

int r,a,diff,ct,cases,n,tracks,ans[100],A[100],flag[100],fla=0,realsum,flag2[100];
void sum(int u,int jog){
    //printf("%d %d\n",u,jog);
    int i=0;
    if(u==tracks+1){
        int sum1=0;
        for(i=1;i<=tracks;i++){
            if(flag[i]==1){
                sum1=sum1+A[i];
            }
        }
        int y=(n-sum1);
        //printf(" fla %d %d\n",y,fla);
        if((y<=diff  || fla==0 )&& y>=0){
                //printf("dhukse\n");
            diff=y;
           //printf("%d\n",diff);
            fla=1;
            int j=0;
            realsum=sum1;
            for(i=1;i<=tracks;i++){
                if(flag[i]==1){
                    j++;
                    //printf("hagu %d\n",j);
                    ans[j]=A[i];
                    //flag2[i]=1;
                    r=j;
                }
            }
        }
    }
    else{
        flag[u]=0;
        sum(u+1,jog);
        flag[u]=1;
        sum(u+1,jog+A[u]);
    }
    //1 4 sum:5
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        scanf("%d",&tracks);
        int i;
        //fla=0;
        for(i=1;i<=tracks;i++){
            scanf("%d",&A[i]);
        }
        for(i=1;i<=r;i++){
            flag[i]=0;
            flag2[i]=0;
        }
        //flag[1]=1;
        diff=0;
        fla=0;
        realsum=0;
        r=0;
        sum(1,0);
        int x;
        for(i=1;i<=r;i++){
           if(i==1){
            printf("%d",ans[i]);
           }
           else{
            printf(" %d",ans[i]);
           }
        }
        printf(" sum:%d\n",realsum);
    }
}
