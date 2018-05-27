#include<stdio.h>
#include<string.h>
char str[1000000];
int ct;

int main(){
    ct=0;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   while(scanf("%s",str)!=EOF){
        ct++;
    if(str[0]=='*'){
        break;
    }
    if(str[0]=='H'){
         printf("Case %d: Hajj-e-Akbar\n",ct);

    }
    if(str[0]=='U'){
         printf("Case %d: Hajj-e-Asghar\n",ct);

    }
   }
}
