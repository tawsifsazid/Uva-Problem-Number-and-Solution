#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

double A,a,b,c,res,i,s,c1,c2,r1,r2,ans1,ans2,ans3;
int main(){
    double pi =acos(-1);
    //printf("%lf",pi);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        s=(a + b +c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        //printf("triangle %lf\n",A);
        r2=A/(s);
        c2=pi*(r2*r2);
        //printf("first ans %lf",A-c1);
        r1=(a*b*c)/(4*A);
        c1=pi*(r1*r1);
        ans1=fabs(c1-A);
        ans2=fabs(A-c2);;
        ans3=fabs(c2);
        printf("%.4lf %.4lf %.4lf\n",ans1,ans2,ans3);
    }
}
