#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,n,ase[32900],ase1[32900],flag[32900];
vector<int>P;
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
int check(int a,int b){
    if(b == 0){
        return a;
    }
    else{
        return check(b,a%b);
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
 //    sieve();
    while(scanf("%d",&n)!=EOF){
        int i,j,k,numb[55];
        if(n==0)break;
        for(i=0;i<n;i++){
            scanf("%d",&numb[i]);
        }
        int res = 0,vag=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                vag++;
                if(check(numb[i],numb[j]) == 1){
                    res++;
                   // printf("res = %d\n",res);
                }
            }
        }
        if(res == 0 ){
            printf("No estimate for this data set.\n");
        }
        else{
           double ans = (double(6*vag))/(double(res));
           printf("%.6lf\n",sqrt(ans));
        }
    }

}
