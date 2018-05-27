#include<bits/stdc++.h>
#define N 2000005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
#define eps 1e-9
using namespace std;

int ct=0,cases,m,B[6000005],state,threshold;
double rail,road;
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
  double cost;
}A[6000005];
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
struct C{
    double xx,yy;
}cord[6000005];
int mst(int a){
    int tot=0,in=0,i,j,res = 0;
    for(i=0;i<=m;i++)B[i]=i;
    while(tot!=m - 1){
        int u = fnd(A[in].u);
        int v = fnd(A[in].v);
        if(u!=v){
            B[u] = v;
            res = res + A[in].cost;

            double  x = (cord[A[in].u].xx - cord[A[in].v].xx);
            double  y = (cord[A[in].u].yy - cord[A[in].v].yy);
            double dist = sqrt(((x*x) + (y*y)));
            //printf("%lf\n",dist);
            //printf("1st MST = %lld tot = %lld \n",edgenisi[tot],tot);
            if(dist > double(threshold)  + eps){
                rail = rail + A[in].cost;
                state++;
            }
            else{
                road = road + A[in].cost;
            }
            tot++;
            //printf("tot = %lld\n",tot);
        }
        in++;
        if(in == a)break;
        //printf("in = %lld\n",in);
    }
    return res;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        memset(cord,0,sizeof cord);
        memset(A,0,sizeof A);
        memset(B,0,sizeof B);
        scanf("%d %d",&m,&threshold);
        int  i,j,k;
         rail=0,road=0,state = 1;
        for(i=0;i<m;i++){
            scanf("%lf %lf",&cord[i].xx,&cord[i].yy);
            //printf("%lf\n",cord[i].xx);
        }
        k = 0;
        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){
                double x =  cord[i].xx - cord[j].xx;
                double y =  cord[i].yy - cord[j].yy;
                //printf("%lf %lf\n",x,y);
                double dist = sqrt(((x*x) + (y*y))) ;
               //printf("%lf\n",dist);

                A[k].cost = dist;
                A[k].u = i;
                A[k].v = j;
                k++;
            }
        }
        sort(A,A+k,compare);
        int ans = mst(k);
    //cout<<"hehe"<<endl;
    //for(i=0;i<k;i++){
    //    printf("%lf\n",A[i].cost);
    //}
        //cout<<ans<<endl;
        //printf("%lf %lf\n",rail,road);
        rail = round(rail);
        road = round(road);
        printf("Case #%d: %d %d %d\n",ct,state,int(road),int(rail));
    }

}
