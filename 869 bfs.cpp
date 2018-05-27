#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,vis[30],vis1[30];
vector<int>graph[35];
vector<int>graph1[35];
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
void bfs(int node){
    vis[node] = 1;

    queue<int>Q;


    Q.push(node);

    int i,j,k;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(i = 0; i<graph[u].size() ; i++){
            int v  = graph[u][i];
            if(vis[v] == 0){
                vis[v] = 1;
                Q.push(v);
            }
        }
    }

}
void bfs1(int node){
    vis1[node] = 1;

    queue<int>Q1;


    Q1.push(node);

    int i,j,k;

    while(!Q1.empty()){
        int u = Q1.front();
        Q1.pop();
        for(i = 0; i<graph1[u].size() ; i++){
            int v  = graph1[u][i];
            if(vis1[v] == 0){
                vis1[v] = 1;
                Q1.push(v);
            }
        }
    }

}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>cases;
    while(cases--){
        char a,b;
        int n,m,i,j,k;
        memset(vis,0,sizeof vis);
        memset(vis1,0,sizeof vis1);
        cin>>n;
        for(i = 0 ; i< n; i++){
            cin>> a >> b;
            graph[a - 64].push_back(b - 64);
            graph[b - 64].push_back(a - 64);
        }
        cin>>m;
        for(i = 0 ; i< m; i++){
            cin>> a >> b;
            graph1[a - 64].push_back(b - 64);
            graph1[b - 64].push_back(a - 64);
        }
        char ch;
        int fl = 0;
        for(ch = 'A' ; ch <= 'Z'; ch++){
            for(j = 0 ;j < graph[ch - 'A'].size() ; j++){
               int gg = graph[ch - 'A'][j];
               if(vis[ch - 'A'] == 0){
                    bfs(ch - 'A');
                    bfs1(ch - 'A');
               }
               if(vis1[gg] == 0){
                 fl = 1;
                 break;
               }
            }
        }
        if(fl == 1)printf("NO\n");
        else printf("YES\n");
        for(i=0;i<=29;i++){
            graph[i].clear();
            graph1[i].clear();
        }
        if(cases)printf("\n");
    }



}
