#include<stdio.h>
#include<string.h>
#include<math.h>
double a,b,len,c,flag1,j,k,res1,res2;
int i,sum1,sum2,rem;
char name1[100];
char name2[100];
int main(){
   while(gets(name1)){
        gets(name2);
            a=strlen(name1);
            b=strlen(name2);
            sum1=0;
            sum2=0;
            for(i=0;i<a;i++){
                if(name1[i]>='a' && name1[i]<='z'){
                    sum1=sum1 + (name1[i]-96);
                }
                if(name1[i]>='A' && name1[i]<='Z'){
                    sum1=sum1 + (name1[i]-64);
                }

            }
            for(i=0;i<b;i++){
                  if(name2[i]>='a' && name2[i]<='z'){
                    sum2=sum2 + (name2[i]-96);
                  }
                   if(name2[i]>='A' && name2[i]<='Z'){
                    sum2=sum2 + (name2[i]-64);
                }
            }
            res1=0;
            res2=0;
            while(sum1!=0){
                rem=sum1%10;
                res1=res1 + rem;
                sum1=sum1/10;
                if(sum1==0){
                    if(res1>9){
                        sum1=res1;
                        res1=0;
                    }
                    else{
                        break;
                    }
                }
            }
            while(sum2!=0){
                rem=sum2%10;
                res2=res2 + rem;
                sum2=sum2/10;
                if(sum2==0){
                    if(res2>9){
                        sum2=res2;
                        res2=0;
                    }
                    else{
                        break;
                    }
                }
            }
            //printf("%lf %lf\n",res1,res2);
            if(res1>res2){
                printf("%.2lf %%\n",(res2/res1)*100);
            }
            if(res2>res1){
                printf("%.2lf %%\n",(res1/res2)*100);
            }
            if(res2==res1){
                printf("%.2lf %%\n",(res1/res2)*100);
            }

    }

}


