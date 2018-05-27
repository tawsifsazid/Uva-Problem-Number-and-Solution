#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double area,r,x1,y1,x2,y2,x3,y3,res,j,i,pi,ab,bc,ca,s;
    pi=acos(-1);
    //printf("%lf",pi);
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        ab=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        //printf("%lf\n",ab);
        bc=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
         //printf("%lf\n",bc);
        ca=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
         //printf("%lf\n",ca);
        s=(ab+bc+ca)/2;
         //printf("%lf\n",s);
        area=sqrt(s*(s-ab)*(s-bc)*(s-ca));
         //printf("%lf\n",area);
        r=(ab*bc*ca)/(4.0*area);
         //printf("%lf\n",r);
        res=2.0*pi*r;

        printf("%.2lf\n",res);
    }
}
