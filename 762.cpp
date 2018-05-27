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

int flag,a,i,j,k,res,ct,cases,n,v,parent[80000],visited[80000],path[80000],l=0;
map<int,string>y;
void fin(int pare,int child){

    if(parent[pare]==child)return;
    else{
        fin(parent[pare],pare);
        if(parent[pare]==pare){

        }
        else{
            cout<<y[parent[pare]]<<" "<<y[pare]<<endl;
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&cases)!=EOF){
        if(l>0)printf("\n");
         l++;
         flag=0;
        map<string,int>x;
        //map<int,string>y;
        string a,b;
        vector<int>graph[1000];
        k=0;
        for(i=1;i<=cases;i++){
            flag=1;
            cin>>a>>b;
            if(x[a]==0){
               k++;
               x[a]=k;
               y[k]=a;
               //cout<<a<<" "<<"ase"<<" "<<x[a]<<" "<<"tey"<<endl;
            }
            if(x[b]==0){
                k++;
                x[b]=k;
                y[k]=b;
                 //cout<<b<<" "<<"ase"<<" "<<x[b]<<" "<<"tey"<<endl;
            }
            graph[x[a]].push_back(x[b]);
            graph[x[b]].push_back(x[a]);
        }
        for(i=1;i<=50000;i++){
            parent[i]=i;
            visited[i]=0;
            path[i]=0;
        }
        cin>>a>>b;
        queue<int>Q;
        Q.push(x[a]);
        visited[x[a]]=1;
        path[x[a]]=0;
        while(!Q.empty()){
            v=Q.front();
            Q.pop();
            for(i=0;i<graph[v].size();i++){
                if(visited[graph[v][i]]==0){
                    visited[graph[v][i]]=1;
                    parent[graph[v][i]]=v;
                    path[graph[v][i]]=path[v]+1;
                    //printf("%d er shathe jukto %d\n",v,graph[v][i]);
                    Q.push(graph[v][i]);
                }
            }
        }
        //printf("aschhe\n");
        if(visited[x[b]]==1){

            fin(x[b],x[b]);
        }
        if(flag==0 || visited[x[b]]==0 || x[a]==0 || x[b]==0){
            //printf("No route\n");
            cout<<"No"<<" "<<"route"<<endl;
        }
    }
}
