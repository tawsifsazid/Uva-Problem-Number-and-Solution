#include<stdio.h>
#include<math.h>

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c,d,cases;
        scanf("%d",&a);
        cases=0;
        while(a--){
            cases++;
            scanf("%d %d %d",&b,&c,&d);
            if(b>c&&b>d){
                if(c>d)printf("Case %d: %d\n",cases,c);
                else{
                    printf("Case %d: %d\n",cases,d);
                }
            }
            if(c>b&&c>d){
                if(b>d)printf("Case %d: %d\n",cases,b);
                else{
                    printf("Case %d: %d\n",cases,d);
                }
            }
            if(d>b&&d>c){
                if(b>c)printf("Case %d: %d\n",cases,b);
                else{
                    printf("Case %d: %d\n",cases,c);
                }
            }
        }
}
