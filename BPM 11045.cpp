#include<bits/stdc++.h>
#define ll long long
#define pare pair<string,string>
using namespace std;

int ct,cases,m,n;
int L[105],R[105],vis[105];
vector<int>graph[105];
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
bool tryk(int s){
    if(vis[s] == 1) return false;
    vis[s] = 1;
    for(int i=0;i<graph[s].size();i++){
        int v = graph[s][i];
        if(R[v] == -1 || tryk(R[v])){
            R[v] = s;
            L[s] = v;
            return true;
        }
    }
    return false;
}
int kuhn(){
    memset(L,-1,sizeof L);
    memset(R,-1,sizeof R);
    int res =0;
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof vis);
        if(tryk(i)){
            res++;
        }
    }
    return res;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%d %d",&m,&n);
        int ase = m/6;

         map<string,int>M;
         map<int,int>N;
        M["S"] =1;M["M"] =2;M["L"] =3;M["XL"] =4;M["XXL"] =5;M["XS"] =6;
        N[1]=1;N[2]=7;N[3]=13;N[4]=19;N[5]=25;N[6]=31;
        //printf("ase %d\n",ase);
        string a,b;
        vector<pare>V;
        int i,j,k;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            V.push_back(pare(a,b));
        }
        int loop,numb;
        for(i=0;i<V.size();i++){
             //printf("I  = %d\n",i);
             loop = ase;
            if(M[V[i].first]==1){
                numb=N[M[V[i].first]];
                loop = ase;
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
             if(M[V[i].first]==2){
                    loop = ase;
                numb=N[M[V[i].first]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].first]==3){
                    loop = ase;
                numb=N[M[V[i].first]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].first]==4){
                    loop = ase;
                numb=N[M[V[i].first]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].first]==5){
                loop = ase;
                numb=N[M[V[i].first]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;
                    //printf("Hoise\n");
                    numb++;
                }
            }
            if(M[V[i].first]==6){
                loop = ase;
                numb=N[M[V[i].first]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].second]==1){
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                   // printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].second]==2){
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                   // printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].second]==3){
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                   // printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].second]==4){
                   //loop = ase;
                   // printf("dhukse\n");
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                   // printf("%d connected with ",i+1);
                    //cout<<numb<<endl;
                    numb++;
                }
            }
            if(M[V[i].second]==5){
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                    //printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
            if(M[V[i].second]==6){
                loop = ase;
                numb=N[M[V[i].second]];
                while(loop--){
                    graph[i+1].push_back(numb);
                   // printf("%d connected with ",i+1);
                    //cout<<numb<<endl;

                    numb++;
                }
            }
        }
        int ans = kuhn();
        if(ans==n)printf("YES\n");
        else printf("NO\n");
        //cout<<N[M[V[0].second]]<<endl;
        M.clear();
        N.clear();
        for(int i = 0;i<=100;i++){
            graph[i].clear();
        }
        V.clear();
    }
}
