#include<stdio.h>
#include<string.h>
#include<math.h>
long long n,i,a,b,len,c,flag1,j,k,res1,res2i,sum1,sum2,rem;
long long array[100000];
int main(){
    while(scanf("%lld",&n)!=EOF){
            a=n;
            c=0;
            b=0;
        if(n<0)break;
        while(n!=0){
            rem=n%3;
            array[c]=rem;
            c++;
            b++;
            n=n/3;
        }
        if(a==0)printf("0");
        else{
            for(i=b-1;i>=0;i--){
            printf("%lld",array[i]);
            }
        }
        printf("\n");
    }
}


