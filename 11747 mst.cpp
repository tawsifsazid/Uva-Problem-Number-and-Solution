#include<bits/stdc++.h>
#define N 2000005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define eps 1e-9
using namespace std;

int ct=0,cases,m,B[600005],n,fl;

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

struct edge{
  int u,v;
  int cost;
}A[600005];
vector<int>ans;
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

int mst(int a){
    int tot=0,in=0,i,j,res = 0;
    for(i=0;i<=n;i++)B[i]=i;
    for(in=0;in<m;in++){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u!=v){
            B[u] = v;
            res = res + A[in].cost;


            tot++;
            //printf("tot = %lld\n",tot);
        }
        else{
               // cout<<"dhukse"<<endl;
                fl = 1;
            //cout<<A[in].cost<<endl;
                int b = A[in].cost;
            ans.push_back(b);
        }
        //in++;
        //if(in == a)break;
        //printf("in = %lld\n",in);
    }
    return res;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n == 0 && m ==0)break;
        fl = 0;
        memset(A,0,sizeof A);
        memset(B,0,sizeof B);
        ans.clear();
        int  i,j,k,a,b,c;
        k  = 0;
        for(i=0;i<m;i++){
            scanf("%d %d %d",&a,&b,&c);
            A[i].u = a;
            A[i].v = b;
            A[i].cost = c;
        }
        sort(A,A+m,compare);
        int v = mst(m);
        if(fl == 1){
            for(i=0;i<ans.size();i++){
                if(i == 0)cout<<ans[i];
                else{
                    cout<<" "<<ans[i];
                }
            }
            cout<<endl;
        }
        else{
            cout<<"forest"<<endl;
        }


    }

}
