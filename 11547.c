#include<stdio.h>
#include<string.h>
#include<math.h>
char str[6000000];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long a,b,c,j,d,cases;
    scanf("%lld",&cases);
    while(cases--){
         j=2;
        scanf("%lld",&a);
        a=((((((a*567)/9)+7492)*235)/47)-498);
        //printf("%lld",a);
        if(a<0){
            a=fabs(a);
            //printf("%lld",a);
        }
        while(j--){
            b=a%10;
            a=a/10;
        }
        printf("%lld\n",b);
    }
}
