#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,fl=1;
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

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,l,m,n,A[25],s;
    while(scanf("%d",&s)!=EOF){
        if(s==0)break;
        if(fl>1)printf("\n");
        fl++;
        for(i=1;i<=s;i++){
            scanf("%d",&A[i]);
        }
        for(i=1;i<=s-5;i++){
            for(j=i+1;j<=s-4;j++){
                for(k=j+1;k<=s-3;k++){
                    for(l=k+1;l<=s-2;l++){
                        for(m=l+1;m<=s-1;m++){
                            for(n=m+1;n<=s;n++){
                                printf("%d %d %d %d %d %d\n",A[i],A[j],A[k],A[l],A[m],A[n]);
                            }
                        }
                    }
                }
            }
        }
    }
}
