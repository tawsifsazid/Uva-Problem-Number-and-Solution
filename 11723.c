#include<stdio.h>
#include<string.h>
#include<math.h>

int can,i,n,r,j,g,cases,ct,ans;
int main(){
    while(scanf("%d %d",&r,&n)!=EOF){
            if(r==0 && n==0)break;
            can=0;
            g=0;
            ct++;
            ans=n;
            for(i=1;i<=26;i++){
                 if(r==n || n>r){
                    i=0;
                    break;
                 }
                ans = ans +(n*1);
                if(ans>=r)break;
            }
            if(ans>=r){
            printf("Case %d: %d\n",ct,i);
            }

         else{
            printf("Case %d: impossible\n",ct);
         }
    }
}
