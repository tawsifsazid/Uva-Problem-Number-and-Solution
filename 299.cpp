#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
int cases,i,j,res,a,n,len,c,k;
int b[60];
int main(){
    scanf("%d",&cases);
    while(cases--){
          k=0;
          res=0;
         for(i=0;i<50;i++)b[i]=0;
        scanf("%d",&n);
        len=n;
        //printf("%d\n",len);
        while(n--){
             //printf("%d\n",i);
            scanf("%d",&b[k]);
       //printf("%d\n",b[k]);
            k++;
        }
        for(i=0;i<len;i++){
            for(j=i+1;j<len;j++){
                if(b[i]>b[j]){
                    //printf("dhuk");
                    c=b[i];
                    b[i]=b[j];
                    b[j]=c;
                    res++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",res);
    }
}
