#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases;
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
int flag[10000006];
char A[350];
void sieve(){
    int i,j,k=2;
    memset(flag , 0, sizeof flag);
    int sqr = sqrt(1000000);
    flag[1] = 1;
    for(i=2;i<=sqr;i++){
        if(flag[i] == 0){
            for(j=i*2;j<=1000000;j = j+i){
                flag[j]=1;
                //printf("%d\n",j);
            }
        }
    }
}
int getnum(int i,int j){
    int num=0,k;
    //printf("i = %d and j = %d\n",i,j);
    for(k=i;k<j;k++){
      num = num*10 + (A[k]-48);
    }
    //printf("num %d\n",num);
    return num;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve();
    //printf("aa\n");
    int i,j,k,n,m,ans,p,len;
    while(scanf("%s",A)){
            //printf(A);
        ans = 0;
        if(A[0] == '0' && strlen(A)==1)break;
        len = strlen(A);
        for(i=0;i<len;i++){
            //printf("i = %d\n",i);
            for(j=i+1;j-i<6 && j<=len;j++){
                p = getnum(i,j);
                //printf("p = %d\n",p);
                //printf("%d\n",flag[p]);
                if(!flag[p] && (j - i)<6){
                    if(p>ans){
                        ans = p;
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
}
