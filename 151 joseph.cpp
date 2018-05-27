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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n == 0)break;
       //7
       // cout<<n<<endl;
        int i,j,k,fl = 0,kk,counter=0,done=0,ans,res=0;
        int flag[105];
        res = 1;
         fl = 0;
        for(i=1;i<=105;i++){
            memset(flag,-1,sizeof flag);
            //cout<<flag[i]<<endl;
            flag[1] = 0;
            counter = 0;
            done = 0;

            for(j=1;j<=n;j++){
                   if(flag[j] == -1){
                        counter++;
                        if(counter == i){
                            flag[j] = 0;
                            counter = 0;
                            ans = j;
                            //cout<<j<<" "<<flag[j]<<" "<<counter<<endl;
                        }
                   }
                   for(k=1;k<=n;k++){
                        if(flag[k] == 0){
                            done++;
                        }
                   }
                   if(done == n){
                       // printf("dhukse i=%d ans=%d\n",i,ans);
                       if(ans == 13){
                            res = i;
                            fl = 1;
                       }
                        break;
                   }
                   else done = 0;

                  // cout<<j<<" "<<flag[j]<<" "<<counter<<endl;
                   if(j == n){
                        j = 0;
                   }

            }
            if(fl == 1)break;

        }
        printf("%d\n",res);
    }



}
