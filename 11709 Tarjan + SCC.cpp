#include<bits/stdc++.h>
#define white 0
#define grey 1
#define black 2
using namespace std;
bool cycle;
int n,M,ct=0,flag,res,counter=0;
vector<int>graph[999999];
vector<int>Q;
map<string,int>m;
int vis[2000];
int disc[2000];
int low[2000];
void tarjan(int s){
    //printf("dfs call %d\n",s);
    int i,j;
    vis[s] = grey;
    Q.push_back(s);
    disc[s] = low[s] = ++counter;
    for(i=0;i<graph[s].size();i++){
        int t = graph[s][i];
        if(vis[t] == white){
            tarjan(t);
            low[s] = min(low[s] , low[t]);
        }
        else if(vis[t] == grey){
            low[s] = min(low[s], low[t]);
        }
    }
    //printf("%d %d\n",disc[s],low[s]);
    if(disc[s] == low[s]){
        //printf("now root %d \n",s);
        while(1){
            int last= Q.back();
            vis[last] = black ;
            Q.pop_back();
            if(last == s)break;
        }
        res++;
    }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k;
    string a,b;
    while(scanf("%d %d",&n,&M)!=EOF){
      getchar();
      ct++;
      for(i=0;i<=999991;i++)graph[i].clear();
      memset(disc,0,sizeof disc);
      for(i=0;i<=1000;i++)low[i]=9999999;
      flag=0;
      res = 0;
      counter = 0;
      if(n==0 && M==0)break;
      memset(vis,white,sizeof vis);
      for(i=1;i<=n;i++){
        getline(cin,a);
        //cout<<a<<endl;
        m[a]=i;
        //cout<<m[a]<<" "<<ans[i]<<endl;
      }
      for(i=1;i<=M;i++){
          getline(cin,a);
          getline(cin,b);
        graph[m[a]].push_back(m[b]);
      }
       for(i=1;i<=n;i++){
            if(vis[i] == white){
                tarjan(i);
            }
       }
        //cout<<m[a]<<" er por "<<m[b]<<endl;
        printf("%d\n",res);
    }
}
