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

int e,n1,n2,i,j,k,res1,res2,ct,cases,n,visited[80000],path[80000],E[80000],v,large;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&e)!=EOF){
        vector<int>graph[4000];
        for(i=0;i<e;i++){
            scanf("%d",&n);
            while(n--){
                scanf("%d",&n1);
                graph[i].push_back(n1);
            }
        }
        scanf("%d",&cases);
        while(cases--){
             map<int,int>u;
             queue<int>Q;
            for(i=0;i<=60000;i++){
                visited[i]=0;
                path[i]=0;
                E[i]=0;
            }
            scanf("%d",&n2);
            Q.push(n2);
            path[n2]=0;
            visited[n2]=1;
            while(!Q.empty()){
                v=Q.front();
                Q.pop();
                for(i=0;i<graph[v].size();i++){
                    if(visited[graph[v][i]]==0){
                        //printf("%d er shathhe friend %d ",v,graph[v][i]);
                        visited[graph[v][i]]=1;
                        path[graph[v][i]]=path[v]+1;
                        //printf("frnd er path ==%d\n",path[graph[v][i]]);
                        Q.push(graph[v][i]);
                    }
                }
            }
            //int large=0,pre=-1,flag=1,day;
            res1=0;
            res2=0;
            large=0;
            int flag=0;
            //sort(path,path+e);
            for(i=0;i<e;i++){
                if(path[i]!=0){
                    E[path[i]]++;
                }
            }
            /*for(i=0;i<e;i++){
                if(visited[i]==1 && path[i]!=0){
                    if(path[i]==pre || flag==1){
                        pre=path[i];
                        res2++;
                        flag=0;
                        if(large<res2){
                            large=res2;
                            day=res1;
                        }

                    }
                    else{
                       res2=1;
                       res1++;
                       pre=path[i];
                       if(large<res2){
                            large=res2;
                            day=res1;
                        }
                    }
                }
            }*/
            for(i=0;i<=25000;i++){
                if(E[i]!=0){
                        //printf("ekhon E[i]==%d\n",E[i]);
                    if(E[i]>large){
                        large=E[i];
                        res1=i;
                    }
                    flag=1;
                }
            }
            if(flag==0)printf("0\n");
            else{
                printf("%d %d\n",large,res1);
            }
        }
    }
}
