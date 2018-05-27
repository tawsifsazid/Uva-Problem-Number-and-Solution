#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long j,h,i,a,b,n,res,k,m,flag,t,res1,two;
long long A[10006],B[10006];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lld %lld",&a,&b)!=EOF){
        res=a+b;
        k=0;
        m=0;
        flag=0;
        res1=0;
        for(i=0;i<=10000;i++){
            A[i]=0;
            B[i]=0;
        }
        while(a!=0){
            k++;
            A[k]=a%2;
            a=a/2;
            //printf("%d %d\n",A[k],k);
        }
       // printf("%d %d %d\n",A[1],A[2],A[3]);
        //for(i=k;i>=1;i--)printf("%d",A[i]);
        //printf("\n");
        while(b!=0){
            m++;
            B[m]=b%2;
            b=b/2;
            //printf("%d %d\n",B[k],m);
        }
        //printf("%d %d %d\n",B[1],B[2],B[3]);
        //printf("%d\n",m);
        //for(i=m;i>=1;i--)printf("%d",B[i]);
        //printf("\n");
        if(k>=m){
            t=k;
        }
        else if(m>=k){
            t=m;
            //printf("boro");
        }
        for(i=1;i<=t;i++){
            if(A[i]==1 && B[i]==1){
               // printf("dhukse");
                flag=1;
                break;
            }
        }
        if(flag==1){
           for(i=1;i<=t;i++){
                if(A[i]==1 && B[i]==1){
                        //printf("dhukse");
                        //printf("0");
                        res1=0 +res1;
                        //printf("%d\n",res1);
                }
                else{
                    //for(j=1;j<=h;j++)two=2*j;
                    res1=(pow(2,i-1)*(A[i] + B[i])) + res1;
                    //printf("%d\n",res1);
                }
            }
            printf("%lld\n",res1);
        }
        else{
            printf("%lld\n",res);
        }
    }
}
