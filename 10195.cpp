#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

double s,a,b,c,r,res;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
       if(a==0 || b==0 || c==0){
            printf("The radius of the round table is: 0.000\n");
       }
       else{
        s=(a+b+c)/2;
        res=sqrt(s*(s-a)*(s-b)*(s-c));
        r=res/s;
        printf("The radius of the round table is: %.3lf\n",r);
       }
    }
}
