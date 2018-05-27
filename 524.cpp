#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int k,res,ct=0,cases,n,A[40],use[40],l=0,circle[40];
bool isprime(int y){
    //printf("%d\n",y);
    int cx=0,sq=sqrt(y);
    for(int i=2;i<=sq;i++){
        if(y%i==0){
            cx=1;
            break;
        }
    }
    if(cx==0)return 1;
    else{
        return 0;
    }

}
void tri(int m){
    //printf("%d\n",m);
    int i;
    if(m==n){
            //printf("d\n");
        if(isprime(circle[m]+1)){
               // printf("finish\n");
            printf("%d",circle[1]);
             for( i=2;i<=n;i++){
                printf(" %d",circle[i]);
             }
             printf("\n");
        }
        else{
            return;
        }
    }
    else{
       for(i=2;i<=n;i++){
        if(isprime(circle[m]+i)&& use[i]!=1){
            //printf("dhuks i==%d\n",i);
            use[i]=1;
            circle[m+1]=i;
            tri(m+1);
            use[i]=0;
        }
        //else{
        //   return;
        //}
       }
    }
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        ct++;
        if(l>0)printf("\n");
        l++;
        int i,j;
        for(int i=1;i<=n;i++){
            A[i]=i;
            use[i]=0;
            circle[i]=0;
        }
        circle[1]=1;
        printf("Case %d:\n",ct);
        tri(1);
        //printf("\n");
    }
}
