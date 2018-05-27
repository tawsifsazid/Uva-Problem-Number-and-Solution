#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int i,cases,n,j,m,g,c,d,k,big;
int  a[1000009],b[1000009],res[1000009];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
            //printf("%d",cases);
            g=0;
        for(i=1;i<=1000000;i++){
            a[i]=0;
            b[i]=0;
            res[i]=0;
        }
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d %d",&c,&d);
            a[i]=c;
            b[i]=d;
        }
        for(i=1,j=n;i<=j;i++,j--){
            k=a[i];
            a[i]=a[j];
           //printf("%d",a[i]);
            a[j]=k;
        }
        //for(i=1;i<=n;i++)printf("%d",a[i]);
        //printf("\n");
        for(i=1,j=n;i<=j;i++,j--){
            k=b[i];
            b[i]=b[j];
            //printf("%d",b[i]);
            b[j]=k;
        }
        //for(i=1;i<=n;i++)printf("%d",b[i]);
        //printf("\n");
       for(i=1;i<=n;i++){
        if(a[i]+b[i]>=10){
            big=(a[i]+b[i])%10;
            g++;
            res[g]=big;
            a[i+1]=a[i+1]+1;
            //printf("%d %d %d\n",res[g],a[i+1],g);
        }
        else{
            g++;
            res[g]=a[i] + b[i];
           //printf("%d %d\n",res[g],g);
        }
       }
       //printf("%d\n",res[3]);
       for(i=n;i>=1;i--){
        printf("%d",res[i]);
       }
       if(cases==0)printf("\n");
       else{printf("\n");
       printf("\n");
       }
    }

}
