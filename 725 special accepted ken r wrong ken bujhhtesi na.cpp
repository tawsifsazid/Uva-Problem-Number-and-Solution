#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int rem,n,i,j,k,flag,A[15],a,b,ch,impflag,flag3,v,l=1;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
         if(n==0)break;
         //printf("ashlo\n");
         if(l>1){
                printf("\n");
         }
            flag=0;
            impflag=0;
            flag3=0;

        for(i=1234;i<=98756;i++){
                //printf("dhukse\n");
            for(k=0;k<=9;k++)A[k]=0;
            flag=0;
            impflag=0;
            v=0;
            b=i;
            a=i*n;
            //printf("%d %d\n",a,b);
            if(b<10000){
                flag=1;
            }
            ch=b;
            //printf("%d %d %d\n",a,b,n);
            while(ch!=0){
                if(flag==1){
                    A[0]++;
                    //printf("first a 0 hle dhuk\n");
                    flag=0;
                    v=1;
                }
                else{
                    rem=ch%10;
                    A[rem]++;
                    ch=ch/10;
                }
            }
            ch=a;
            while(ch!=0){
               rem=ch%10;
                A[rem]++;
                ch=ch/10;
            }
            for(k=0;k<=9;k++){
                if(A[k]==1){

                }
                else{
                    impflag=1;
                    break;
                }
            }
            if(impflag==0){

                    printf("%05d / %05d = %d\n",a,b,n);
                    flag3=1;

            }
        }
        if(flag3==0){
            printf("There are no solutions for %d.\n",n);
        }
        l++;
        //printf("%d\n",l);
    }
}
