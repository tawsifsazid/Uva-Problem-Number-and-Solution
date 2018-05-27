#include<stdio.h>
#include<math.h>
#include<STRING.H>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,a=1,len;

    char str[1000000],rev[1000000],d;
      while(a){
        gets(str);
        len=strlen(str);
        for(i=0,j=len-1;i<=j;i++,j--){
            d=str[i];
            rev[i]=str[j];
            rev[j]=str[i];

        }
            printf("%s\n",rev);
      }
    return 0;
}
