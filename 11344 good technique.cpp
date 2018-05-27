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
char A[2000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        int i,j,k,n,m,fl=0,len;
        scanf("%s",A);
        len = strlen(A);
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&m);
            //printf("now %d\n",m);
            int tmp=0,b=10;
            for(i=0;i<len;i++){
               tmp = tmp*b + (A[i] - 48);
               tmp = tmp%m;
            }
            if(tmp != 0){
                fl = 1;
            }
        }
        if(fl == 1){
            printf("%s - Simple.\n",A);
        }
        else{
            printf("%s - Wonderful.\n",A);
        }
    }
}
