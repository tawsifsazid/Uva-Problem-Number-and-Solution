#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,cases,n,b,j,m,res,g,c;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        res=1;
         if(n>13){
                printf("Overflow!\n");
                //break;
        }
        else if(n<8 && n>=0){
            printf("Underflow!\n");
        }
        else if(n<0){
              n=fabs(n);
            if(n%2==0){
                printf("Underflow!\n");
            }
            else{
                printf("Overflow!\n");
            }
        }
        else{
        for(i=1;i<=n;i++){
            res=res*i;
        }
                printf("%lld\n",res);

        }
    }
}
