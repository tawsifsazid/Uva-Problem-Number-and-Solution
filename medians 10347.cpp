#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

double res,m1,m2,m3,sm,a,b;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)!=EOF){
        res=0;
        sm=(m1 + m2 + m3)/2;
        //printf("%lf\n",sm);
        a=sqrt(sm*((sm-m1)*(sm-m2)*(sm-m3)));
        //printf("%lld\n",a);
        b=(4.0/3);
        //printf("%lf\n",b);
        res=b*a;
        //printf("%.3lf\n",res);
        //if(res<=0 || (m1<=0 || m2<=0 || m3<=0)){
            //printf("-1.000\n");
        //}
        if(m1<=0 || m2<=0 || m3<=0 || sm<=0 || (sm-m1)<=0 ||(sm-m2)<=0 ||(sm-m3)<=0 || res<0 ){
            printf("-1.000\n");
        }
        else{
        printf("%.3lf\n",res);
        }
    }
}
