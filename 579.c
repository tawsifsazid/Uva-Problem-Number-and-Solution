#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double j,ans,diff,a;
    int k,h,m,i;
    char ch;
        while(scanf("%d %c %d",&h,&ch,&m)!=EOF){
            if(h==0){
                break;
            }
            a=(30*h)-(5.5*m);
            ans=fabs(a);
            if(ans>180){
                ans=360-ans;
            }
            printf("%.3lf\n",ans);
        }

}
