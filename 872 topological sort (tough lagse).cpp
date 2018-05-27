#include<bits/stdc++.h>
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,k=1,fl,l=0;
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
map<char,int>M;
map<int,char>N;
vector<int>ans;
vector<int>graph[1005];
int vis[1005];
int indegree[1005];
void dfs(){
   int i,j;
   if(ans.size() == k-1){
        fl = 1;
        for(i=0;i<ans.size() ;i++){
            if(i==0)cout<<N[ans[i]];
            else cout<<" "<<N[ans[i]];
        }
        cout<<endl;
        return;
   }
   for(i=1;i<k;i++){
        if(indegree[i] == 0 && vis[i] == 0){
            vis[i] = 1;
            ans.push_back(i);

            for(j=0;j<graph[i].size();j++){
                int v = graph[i][j];
                indegree[v]--;
            }
            dfs();
            vis[i] = 0;
            ans.pop_back();
            //cout<<i<<endl;
            for(j=0;j<graph[i].size();j++){
                int v = graph[i][j];
                indegree[v]++;
            }

        }
   }
   return;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>cases;
    getchar();
    while(cases--){
          getchar();
            string a,b;
        fl = 0;
        getline(cin,a);
        //getchar();
        getline(cin,b);
        //cout<<b<<endl;
        int i,j;
        //if(l != 0)printf("\n");
        l++;
        k = 1;
        for(i=0;i<a.size();i++){
            if(a[i]>='A' && a[i]<='Z' && M[a[i]] == 0){
                M[a[i]] = k;
                N[k] = a[i];
                //cout<<a[i] << " " << M[a[i]]<<endl;
                k++;
            }
        }
        //cout<<" k= "<<k<<endl;
        memset(indegree,0,sizeof indegree);
        memset(vis,0,sizeof vis);
        for(i=0;i<b.size();i++){
            if(b[i] == '<'){
                  //  cout<<b[0]<<endl;
                indegree[M[b[i+1]]]++;
                graph[M[b[i-1]]].push_back(M[b[i+1]]);
                //cout<<M[b[i-1]]<< " connected "<<M[b[i+1]]<<endl;
            }
        }
        //for()
        dfs();
        if(fl == 0){
            printf("NO\n");
        }
        M.clear();
        N.clear();
        ans.clear();
        for(i=0;i<=105;i++)graph[i].clear();
        if(cases)printf("\n");
    }




}
