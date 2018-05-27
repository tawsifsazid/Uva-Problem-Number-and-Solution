#include<stdio.h>
#include<string.h>
#include<math.h>
int i,j,k,a,b,c,d,cases,res;
char str[52];

int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%s",str)!=EOF){
            getchar();
            res=0;
            c=0;
        for(i=0;str[i]!=NULL;i++){
            if(str[i]>=97 && str[i]<=122){
                //printf("%c",str[i]);
                res=res + (str[i]-96);
                // printf("%d\n",res);
            }
            if(str[i]>=65 && str[i]<=90){
                res=res + (str[i]-38);
                //printf("%d\n",res);
            }
        }
        //printf("%d\n",res);
        d=sqrt(res);
        for(i=2;i<=d;i++){
            if(res%i==0){
                c=1;
                break;
            }
            if(res%i!=0){
                c=0;
            }
        }
        if(c==0){
            printf("It is a prime word.\n");
        }
        if(c==1){
            printf("It is not a prime word.\n");
        }
    }
}
