#include<stdio.h>
#include<string.h>
#include<math.h>
int check,a,b,cases,i,j,k,sum,res,n,ct=0;
int v;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0)break;
        res=0;
        for(i=a;i<=b;i++){
             check=sqrt(i);
             if((check*check)==i){
                res++;
                //printf("%lf\n",res);
             }
        }
        v=res;
        printf("%d\n",v);
   }
}

