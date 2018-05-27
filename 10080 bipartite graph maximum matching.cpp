#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct,cases,n,m,s,v;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
vector<int>graph[105];
int L[105],R[105];
int vis[105];

bool tryk(int s){
    if(vis[s] == 1)return false;

    vis[s] = 1;
    int i,j,k;
    for(i=0;i<graph[s].size();i++){
        int v = graph[s][i];
        if(R[v]==-1 || tryk(R[v])){
            L[s] = v;
            R[v] = s;
            return true;
        }
    }
    return false;
}
int kuhn(){
    int i,j,k,res=0;
    memset(L,-1,sizeof L);
    memset(R,-1,sizeof R);
    for(i=0;i<n;i++){
        memset(vis,0,sizeof vis);
        if(tryk(i)){
            res++;
        }

    }
    return res;
}

double distance(double x1 ,double y1 ,double x2, double y2){
    //printf("%lf\n",sqrt(((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1))));
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d %d %d",&n,&m,&s,&v)!=EOF){
        int i,j,k;
        double gx[105],gy[105],holex[105],holey[105];

        for(i=0;i<n;i++){
            scanf("%lf %lf",&gx[i],&gy[i]);
        }
        for(i=0;i<m;i++){
            scanf("%lf %lf",&holex[i],&holey[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if((distance(gx[i],gy[i],holex[j],holey[j])/(double)v) <= s){
                    graph[i].push_back(j);
                }
            }
        }
        int maxres=kuhn();
        //printf("max = %d\n and n = %d\n",maxres,n);
        printf("%d\n",n-maxres);
        for(i=0;i<=m;i++){
            graph[i].clear();
        }
    }
}
