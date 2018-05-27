#include<stdio.h>
#include<string.h>
char str[9000000];
long long a,b,c,d,e,i,j,k,ans1,ans2,ans,n;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%s",str)!=EOF){
            if(str[0]==48 && strlen(str)==1)break;
            ans1=0;
            ans2=0;
            ans=0;
            n=strlen(str);
    if(n%2==0){
        for(i=0;i<n-1;i=i+2){
            ans1=ans1 + (str[i]-48);
        }
        for(i=1;i<n;i=i+2){
            ans2=ans2 + (str[i]-48);
        }
    }
    else{
        for(i=0;i<n;i=i+2){
            ans1=ans1 + (str[i]-48);
        }
        for(i=1;i<n-1;i=i+2){
            ans2=ans2 + (str[i]-48);
        }
    }
        ans=ans2 - ans1;
        if(ans%11==0){
            printf("%s is a multiple of 11.\n",str);
        }
        else{
            printf("%s is not a multiple of 11.\n",str);
        }
    }
}
