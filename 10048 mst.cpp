#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;


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
int B[1005],s,c,q,ct=0,cases,path[1005],visited[1005],fl =-1,res;
vector<int>G[1005];
int C[1005][1005];
queue<int>Q;
struct edge{
  int u,v,cost,ans;
}A[1005];
bool compare (edge a, edge b){
    return a.cost<b.cost;
}
int fnd(int r){
    if(B[r]==r)return r;
    else{
        r =  fnd(B[r]);
        return r;
    }
}
void mst(){
    int tot=0,in=0,i,j;
    for(i=0;i<=c;i++){
        B[i]=i;
    }
    while(tot!=c-1 && in!=s){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u!=v){
            B[v] = u;
            //res = res + A[in].cost;
            //printf("%d  = %d \n",A[in].u,A[in].v);
            G[u].push_back(v);
            G[v].push_back(u);
            //printf("a\n");
            C[u][v] = A[in].cost;
            C[v][u] = A[in].cost;
            tot++;
            //printf("tot = %d\n",tot);
        }
        in++;
        //printf("in = %lld\n",in);
    }

}
void bfs(int node,int end){
   // printf("source %d\n",source);

    visited[node] =1 ;
    path[node] = 1;
    Q.push(node);
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++){
            int v = G[u][i];
            if(visited[v] == 0){
                visited[v] = 1;
                path[v] = u;
                Q.push(v);
                if(v == end)return;
            }
        }
    }
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d %d",&c,&s,&q)!=EOF){
        if(c==0 && s==0 && q==0)break;
        ct++;
        if(fl>-1)printf("\n");
        fl =0;
        memset(A,0,sizeof A);
        memset(C,0,sizeof C);
        //memset(path,0,sizeof path);
        int i,j,k,a,b,cst;

        for(i=0;i<s;i++){
            scanf("%d %d %d",&a,&b,&cst);
            A[i].u = a;
            A[i].v = b;
            A[i].cost = cst;
        }
        sort(A,A+s,compare);
        //
        mst();
        printf("Case #%d\n",ct);
        for(i=1;i<=q;i++){
            //printf("dhuklo\n");
            scanf("%d %d",&a,&b);
            //memset(visited,0,sizeof visited);
            //memset(path,0,sizeof visited);
            if(fnd(a) != fnd(b)){
                printf("no path\n");
            }
            else{
                res = -1;
                memset(path,-1,sizeof path);
                memset(visited,0,sizeof visited);
                Q = queue<int>();
                bfs(a,b);

                while(a != b){
                   // printf()
                    res = max(res,C[path[b]][b]);
                    b = path[b];

                    //printf("b = %d\n",b);
                }
                printf("%d\n",res);
            }
        }
         for(i=0;i<=c;i++){
            G[i].clear();
         }
         //if(cases)printf("\n");
    }
}
