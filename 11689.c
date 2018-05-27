#include<stdio.h>
#include<string.h>
#include<math.h>
int cases,i,j,k,a,b,c,d,rem,res;
int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&cases);
   while(cases--){
        scanf("%d %d %d",&a,&c,&b);
         a=a+c;
         res=0;
            while(a!=0){
                    if(a<b)break;
                    else{
                        rem=a%b;
                        a=a/b;
                        res=a+res;
                        a=a+rem;
                    }
            }
            printf("%d\n",res);

   }
}
