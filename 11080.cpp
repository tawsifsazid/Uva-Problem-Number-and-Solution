#include<bits/stdc++.h>

using namespace std;

int k,res,ct=0,cases,n,v,e,a,b,fl;
vector<int>graph[20005];
int color[20005];
queue<int>Q;
void bfs(){
    int i,j,color1,color2,jog=0;
    for(j=0;j<v;j++){
        if(color[j]==0){
            //printf("i = %d\n",i);
            color1=0;
            color2=0;
            Q.push(j);
            color[j]=1;
            color1++;
            jog=0;
            //printf("color1 = %d\n",color1);
        while(!Q.empty()){
            int now = Q.front();
            jog++;
            Q.pop();
            for(i=0;i<graph[now].size();i++){
                //printf("checking %d\n",graph[now][i]);
                if(color[graph[now][i]]==0){
                    if(color[now]==1){
                        color[graph[now][i]]=2;
                        color2++;
                        //printf("color2 = 2\n");
                    }
                    else{
                        color[graph[now][i]]=1;
                        color1++;
                        //printf("color1 = 1\n");
                    }
                    Q.push(graph[now][i]);
                }
                else{
                    if(color[graph[now][i]] == color[now]){
                        //printf(":p %d\n",graph[now][i]);
                        fl=1;
                        break;
                    }
                }
            }
        }
            //printf("%d\n",min(color1,color2));
            if(jog==1){
                //printf("dhulkse\n");
                res = res + 1;
            }
            else{
                res = res + min(color1,color2);
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    scanf("%d",&cases);
    while(cases--){
         scanf("%d %d",&v,&e);
         res=0;
         fl=0;
         memset(color , 0 ,sizeof color);
         Q = queue<int>();
         for(i=0;i<=v;i++)graph[i].clear();
            for(i=1;i<=e;i++){
                scanf("%d %d",&a,&b);
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
         bfs();
         if(fl==0){
               if(res!=0)printf("%d\n",res);

         }
         else{
            printf("-1\n");
         }
    }

}
