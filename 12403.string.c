#include<stdio.h>
#include<string.h>
    char str[1000000];
int main(){
    int a,b,cases,j,ans,c,i;
    ans=0;
    a=0;
    scanf("%d",&cases);
    while(cases--){
        scanf("%s",str);
        if(str[0]=='d'){
            scanf("%d",&a);
            ans=ans + a;
        }
        else if(str[0]=='r')
        {
            printf("%d\n",ans);
        }

    }
}
