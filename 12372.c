#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c,d,cases,ct;
    ct=0;
    scanf("%d",&cases);
    while(cases--){
        ct++;
        scanf("%d %d %d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20){
            printf("Case %d: good\n",ct);
        }
        else{
            printf("Case %d: bad\n",ct);
        }
    }
}
