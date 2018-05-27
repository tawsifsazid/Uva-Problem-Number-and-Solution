#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double r,n,area,res,b,tri;
    while(scanf("%lf %lf",&r,&n)!=EOF){
            res=acos(-1);
            b=(2*res)/n;
            tri=(.5*r*r)*sin(b);
            area=n*tri;
            //printf("%lf\n",b);
            //printf("%lf\n",sin(360/n));
            //area=((r*r)*n*(b/2));
        printf("%.3lf\n",area);
    }
}
