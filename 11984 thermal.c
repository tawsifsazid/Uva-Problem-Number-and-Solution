#include<stdio.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double res,i,t,f,c,d;
    int cases,ct;
    ct=0;
    scanf("%d",&cases);
    while(cases--){
        ct++;
        scanf("%lf %lf",&c,&d);
        res=c + (5*d)/9;
        printf("Case %d: %.2lf\n",ct,res);
    }
}

