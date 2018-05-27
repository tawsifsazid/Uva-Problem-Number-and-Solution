#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
int i,n,j,k,b,l,flag;
int a[1003],res[1003],isprime[1003],x;
int fact();
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
    if(n==0)break;
    fact();
    l=0;
    x=0;
    b=0;
    flag=0;
    for(i=0;i<1000;i++)res[i]=0;
    for(i=1;isprime[i]<=n;i++){
        for(j=2;j<=n;j++){
            b=j;
            //if(j==59){
                //while(b!=1 && (b%isprime[i]==0)){
               // b=b/isprime[i];
                //printf("%d ekhon\n",b);
                //res[i]++;
                //printf("%d",res[i]);
            //}
            //}
            while(b!=1 && (b%isprime[i]==0)){
                b=b/isprime[i];
                res[i]++;
                //printf("%d",res[3]);
            }
            //printf("%d\n",x);
            //printf("\n");
        }
    }
    printf("%3d! =",n);
    for(i=1;isprime[i]<=n;i++){
            l++;
      if(l<=15){      //printf("%dn",l);
        for(j=1;j<=res[i];j++){

        }
        printf("%3d",j-1);

     }
     else {
         if(l>15 && flag==0){
                printf("\n      ");
                flag=1;
         }
         if(flag==1){
          for(j=1;j<=res[i];j++){
                    //printf("%d",res[i]);
          }
        }
        printf("%3d",j-1);
     }
   }
    printf("\n");
 }
}
int fact(){
    k=1;
    for(i=1;i<=1000;i++)res[i]=0;
    isprime[1]=2;
    for(i=1;i<=1000;i++){
            a[i]=0;
    }
    for(i=3;i<=1000;i=i+2){
        if(a[i]==0){
            k++;
            isprime[k]=i;
            //printf("%d \n",isprime[k]);
        }
        if(a[i]!=1){
               // printf("dsad");
            for(j=i*i;j<=1000;j=j+i){
                //printf("%d eta",a[j]);
                a[j]=1;
            }
        }
    }
}
