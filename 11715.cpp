#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
long long n,ct;
double u,v,s,t,a,res;
int main(){
    while(scanf("%lld",&n)!=EOF){
     if(n==0)break;
     s=0;
     v=0;
     t=0;
     a=0;
     u=0;
      ct++;
     if(n==1){
        scanf("%lf %lf %lf",&u,&v,&t);
        a=(v-u)/t;
        s=((v*v)-(u*u))/(2*a);
        printf("Case %lld: %.3lf %.3lf\n",ct,s,a);
     }
       if(n==2){
        scanf("%lf %lf %lf",&u,&v,&a);
        t=(v-u)/a;
        s=((v*v)-(u*u))/(2*a);
        printf("Case %lld: %.3lf %.3lf\n",ct,s,t);
     }
       if(n==3){
        scanf("%lf %lf %lf",&u,&a,&s);
        v=sqrt((u*u)+(2*a*s));
        t=(v-u)/a;
        printf("Case %lld: %.3lf %.3lf\n",ct,v,t);
     }
       if(n==4){
        scanf("%lf %lf %lf",&v,&a,&s);
        u=sqrt((v*v)-(2*a*s));
        t=(v-u)/a;
        printf("Case %lld: %.3lf %.3lf\n",ct,u,t);
     }
  }
}
