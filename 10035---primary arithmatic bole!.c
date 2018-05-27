#include<stdio.h>
#include<string.h>
#include<math.h>
char a1[22],b1[22];
long long i,j,k,l,m,res,a,b,carry,ans;
int main(){
    for(i=0;i<22;i++){
        a1[i]='0';
        b1[i]='0';
      }
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%s %s",a1,b1)!=EOF){
    //for(i=0;i<22;i++){
     //   a1[i]='0';
     //   b1[i]='0';
     // }
            ans=0;
            carry=0;
            l=0;
        //if(a1[0]=='0'&&b1[0]=='0')break;
        a=strlen(a1);
        b=strlen(b1);
        if(a==1 && b==1 && a1[0]=='0'&&b1[0]=='0')break;
        if(a>b){
            for(i=1;i<=b;i++){
                b1[a-i]=b1[b-i];
                b1[b-i]='0';
                 //printf("%d\n",i);
            }
            for(i=0;i<a && b1[i]<=48;i++){
                b1[i]='0';
                //printf("dhuk\n %d",b1[i]-48);
            }
            b=a;
            //printf("%s",b1);
        }
          if(b>a){
            for(i=1;i<=a;i++){
                a1[b-i]=a1[a-i];
                a1[a-i]='0';
                // printf("%d\n",i);
            }
            for(i=0;i<b && a1[i]<=48;i++){
                a1[i]='0';
                //printf("dhuk\n %d",b1[i]-48);
            }
            a=b;
            //printf("%s",a1);
        }
        for(i=a-1;i>=0;i--){
            //printf("%d\n",a1[i]-48+b1[i]-48+carry);
            if((a1[i]-48)+(b1[i]-48)+carry>9){
                carry=1;
                ans=ans +carry;
                l=1;
                //printf("%d",carry);
            }
            else{
                carry=0;
            }
        }
        if(l==0){
            printf("No carry operation.\n");
        }
        else if(l==1 && ans==1){
            printf("1 carry operation.\n");
        }
        else if(l==1 && ans>1){
            printf("%lld carry operations.\n",ans);
        }
         for(i=0;i<22;i++){
        a1[i]='0';
        b1[i]='0';
      }
    }
}
