#include<bits/stdc++.h>
#define white 0
#define grey 1
#define black 2
using namespace std;
bool cycle;
int n,M,ct=0;
vector<int>graph[500];
vector<int>topo;
map<string,int>m;
map<int,string>ans;
int indegre[500];
int vis[500];

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k;
    string a,b;
    while(scanf("%d",&n)!=EOF){
      ct++;
      memset(vis,0,sizeof vis);
      memset(indegre,0,sizeof indegre);
      m.clear();
      ans.clear();
      topo.clear();
      for(i=0;i<=400;i++){
        graph[i].clear();
      }
      for(i=0;i<n;i++){
        cin>>a;
        m[a]=i;
        ans[i] = a;
        //cout<<m[a]<<" "<<ans[i]<<endl;
      }
      scanf("%d",&M);
      for(i=0;i<M;i++){
          cin>>a>>b;
        graph[m[a]].push_back(m[b]);
        //cout<<m[a]<<" er por "<<m[b]<<endl;
        indegre[m[b]]++;
        //cout<<m[b]<<" indegree= "<<indegre[m[b]]<<endl;
      }
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            if(vis[j]==0 && indegre[j]==0){
                //cout<<ans[j]<<endl;
                topo.push_back(j);
                vis[j]=1;
                for(k=0;k<graph[j].size();k++){
                    indegre[graph[j][k]]--;
                }
                break;
            }
          }
      }
      printf("Case #%d: Dilbert should drink beverages in this order:",ct);
      for(i=0;i<topo.size();i++){
        cout<<" "<<ans[topo[i]];
      }
      printf(".\n\n");
    }
}
