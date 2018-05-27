#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases;
char A[500005];
int l[500005];
int r[500005];

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

    while(scanf("%s",A)!=EOF){
        int len = strlen(A);
        memset(r,0,sizeof r);
        memset(l,0,sizeof l);
        int i,j,k,res = 0;

        if(A[len -1 ] == '.')l[len] = 1e8;
        //cout<<l[0]<<endl;
        if(A[0] == '.')r[0] = 1e8;

        for(i=len-1;i>=0;i--){
           if(A[i] == '.'){
             l[i] = 1 + l[i+1];
           }
           else l[i] = 0;
          //cout<<i<<" "<<l[i]<<endl;
        }
        for(i=1;i<len;i++){
           if(A[i] == '.'){
             r[i] = 1 + r[i-1];
           }
           else r[i] = 0;
           //cout<<i<<" "<<r[i]<<endl;
        }
        for(i=0;i<len;i++){
            if(A[i] == '.'){
                 //cout<<l[i] << " yoo " << r[i]<<endl;
                res = max(res,min(l[i],r[i]));
            }
        }
        printf("%d\n",res-1);

    }
}
