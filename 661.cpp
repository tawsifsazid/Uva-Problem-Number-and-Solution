#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

ll ct=0,cases,n,m,c;

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


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     ll A[25000],flag[250000];
    while(scanf("%lld %lld %lld",&n,&m,&c)!=EOF){
            ct++;
        if(n==0 && m==0 && c ==0)break;
        ll i,j,k,fl = 0;
        memset(flag,0,sizeof flag);
        for(i=1;i<=n;i++){
            scanf("%lld",&A[i]);
        }
        ll res = 0,large=-1;
        for(i=0;i<m;i++){
            scanf("%lld",&k);
            if(flag[k] == 0){
                flag[k] = 1;
                res = res + A[k];
            }
            else{
                res = res - A[k];
                flag[k]=0;
            }
            large = max(large,res);
        }
        printf("Sequence %lld\n",ct);
        if(large > c)printf("Fuse was blown.\n");
        else{
            printf("Fuse was not blown.\nMaximal power consumption was %lld amperes.\n",large);
        }
        printf("\n");
    }

}
