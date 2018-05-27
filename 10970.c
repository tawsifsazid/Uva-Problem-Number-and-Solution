#include<stdio.h>
#include<string.h>
#include<math.h>
//long long array[5000];
long long res1,res2,m,n,i,j,res;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld",&m,&n)!=EOF){
            res1=0;
            res2=0;
        for(i=1;i<=n;i++){
            res1=res1 + (m-1);
        }
        res2=(n-1);
        res=res1 + res2;
        printf("%lld\n",res);
    }
}
