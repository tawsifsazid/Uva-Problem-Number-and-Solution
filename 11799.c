#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,cases,ct,clown;
    ct=0;
    scanf("%d",&cases);
    while(cases--){
        ct++;
        scanf("%d",&a);
        clown=0;
        while(a--){
            scanf("%d",&b);
            if(b>clown){
                clown=b;
            }
        }
        printf("Case %d: %d\n",ct,clown);
    }
}
