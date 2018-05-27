#include<stdio.h>
#include<math.h>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double r,pi,ans1,ans2,l,w,a;
    int i;
    pi=acos(-1);
    while(scanf("%d",&i)!=EOF){
    while(i--){
         scanf("%lf",&l);
        r=(l/5);
        w=(6*l)/10;
        ans1=pi*(r*r);
        ans2=(l*w)-ans1;
        printf("%.2lf %.2lf\n",ans1,ans2);
    }
    }
}
