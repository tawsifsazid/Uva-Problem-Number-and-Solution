#include<bits/stdc++.h>
#define bah 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases;
vector<int>G[2000005];
map<string,int>M;
map<int,string>N;
int visited[2000005],level[2000005],n,m;
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
queue<int>Q;
void bfs(int node){
    visited[node]  = 1;
    level[node]=0;
    Q.push(node);
    int i,j,k;
    while(!Q.empty()){
        int u =Q.front();
        Q.pop();
        for(i=0;i<G[u].size();i++){
            int v = G[u][i];
            if(visited[v] == 0){
                visited[v] = 1;
                level[v] = level[u]+1;
                Q.push(v);
            }
        }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>cases;
    while(cases--){
        ct++;
         int num = 1,i,j,k,len;
        string tmp,s;
        vector<string>v;
        cin>>n>>m;
        getchar();
        for(i=0;i<=200000;i++){
            G[i].clear();
        }
        N.clear();
        M.clear();
        v.clear();
        Q = queue<int>();
        memset(visited,0,sizeof visited);
        memset(level,0,sizeof level);



        for(i=0;i<n;i++){
            v.clear();
            s.clear();
            getline(cin,s);
            len = s.length();
            for(j=0;j<len;j++){
                if(s[j-1] == '.' && s[j]==','){
                    //cout<<tmp<<endl;
                    v.push_back(tmp);
                    tmp.clear();
                    j++;
                    continue;
                }
                else if(s[j-1] == '.' && s[j]==':'){
                    //<<tmp<<endl;
                    v.push_back(tmp);
                    tmp.clear();
                    break;
                }
                tmp = tmp + s[j];
            }
            for(j=0;j<v.size();j++){
                 if(M[v[j]] == 0){
                        M[v[j]] = num;
                        N[num] = v[j];
                        //cout<<M[v[j]]<<endl;
                        num++;
                }
                for(k=j+1;k<v.size();k++){
                    if(M[v[k]] == 0){
                        M[v[k]] = num;
                        N[num] = v[k];
                        num++;
                    }

                    //cout<<M[v[j]]<<" "<<M
                    G[M[v[j]]].push_back(M[v[k]]);
                    G[M[v[k]]].push_back(M[v[j]]);
                }
                //cout<<"bair hoise\n";
            }
            //cout<<"bair hoise\n";

        }

            string a ="Erdos, P.";
            //cout<<M[a]<<endl;
            bfs(M[a]);

        cout<<"Scenario "<<ct<<endl;
        //getchar();
        for(i=0;i<m;i++){
            getline(cin,s);
            //cout<<s<<endl;
            if(visited[M[s]] == 0 && M[s] != 0){
                cout<<N[M[s]]<<" "<<"infinity"<<endl;
            }
            else if(visited[M[s]] == 0 && M[s] == 0){
                cout<<s<<" "<<"infinity"<<endl;
            }
            else{
                 //cout<<"hehe"<<endl;
                cout<<N[M[s]]<<" "<<level[M[s]]<<endl;
            }
        }

    }

}
