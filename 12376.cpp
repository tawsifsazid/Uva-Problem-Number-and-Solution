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

int ans,i,j,k,res,ct=0,cases,n,m,cost[2000],l,n1,n2,x,sz,large,x1,x2,flag;
vector<int>graph[1000];
//vector<int>cost[1000];
queue<int>Q;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        res=0;
        for(i=0;i<=1000;i++)cost[i]=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&l);
            cost[i]=l;
        }
        for(i=0;i<m;i++){
            scanf("%d %d",&n1,&n2);
            graph[n1].push_back(n2);
        }
        Q.push(0);
       while(!Q.empty()){
         flag=0;
         x=Q.front();
         sz=graph[x].size();
         Q.pop();
         large=0;
            for(i=0;i<sz;i++){
                   flag=1;
                   //printf("ekhon %d er shathhe jukto %d\n",x,graph[x][i]);
                //if(graph[x][i]!=-1){
                    x1=graph[x][i];
                    //if(x==1)break;
                    //graph[x][i]=-1;
                    if(cost[x1]>large){
                        large=cost[x1];
                         x2=x1;
                         ans=x1;
                    }
                //}
            }
            //printf("x2== %d\n",x2);
                res=res+large;
                Q.push(x2);
            int u=graph[x2].size();
            if(u==0){
                //res=res+cost[x2];
                ans=x2;
                //printf("ekhon res %d\n",res);
                break;
            }
            //if(x2==4)break;
       }
       printf("Case %d: %d %d\n",ct,res,ans);
       for(i=0;i<n;i++){
        graph[i].clear();
       }
       Q=queue<int>();
    }
}
