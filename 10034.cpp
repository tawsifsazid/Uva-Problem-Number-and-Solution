#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,n,m;
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
    double x,y,cost;
    int u,v;
}A[5055];
int B[5055];
int fnd(int r){
   if(B[r] == r)return r;
    else return r = fnd(B[r]);
}
bool compare(edge a,edge b){
    return a.cost < b.cost;
}
double mst(){
    int i,j,k,tot = 0;
    double res = 0;
    for(i=0;i<=n;i++){
        B[i] = i;
    }
    while(tot != n - 1){
        for(i=0;i<m;i++){
            int u = fnd(A[i].u);
            int v = fnd(A[i].v);
            if(u != v){
                B[u] = v;
                res = res + A[i].cost;
                tot++;
            }
        }
    }
    return res;
}
struct nothing{
    double x,y;
}cord[105];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int fl = 0;
    scanf("%d",&cases);
    while(cases--){
        memset(A,0,sizeof A);
        memset(cord,0,sizeof cord);
        scanf("%d",&n);
        double a,b;
        int i,j,k;
        for(i=0;i<n;i++){
            scanf("%lf %lf",&cord[i].x,&cord[i].y);
        }
        k = 0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                double x = abs(cord[i].x - cord[j].x);
                double y = abs(cord[i].y - cord[j].y);
               // cout<<x<<" "<<y<<endl;
                double dist = sqrt((x*x) + (y*y));
                //cout<<dist<<endl;
                A[k].u = i;
                A[k].v = j;
                A[k].cost = dist;
                k++;
            }
        }
        //cout<<"ss"<<endl;
        m = k;
        sort(A,A + k,compare);
        //for(i=0;i<m;i++){
        //    cout<<A[i].cost<<endl;
        //}
        double ans = mst();
        printf("%.2lf\n",ans);
        if(cases)printf("\n");
    }

}
