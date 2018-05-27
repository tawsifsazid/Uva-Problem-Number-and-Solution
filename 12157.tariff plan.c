#include<stdio.h>
#include<string.h>
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int ct,cases,a,b,c,d,e,call,ans1,ans2;
    ct=0;

    scanf("%d",&cases);
    while(cases--){
        ans1=0;
        ans2=0;
        ct++;
        scanf("%d",&call);
        while(call--){
            scanf("%d",&a);
            b=a;
            while(a>=0){
               if(a<=29){
                ans1=ans1 + 10;
                break;
               }
                a=a-30;
                ans1=ans1+10;
            }
            while(b>=0){
               if(b<=59){
                    ans2=ans2 + 15;
                    break;
               }
                b=b-60;
                ans2=ans2+15;
            }
        }
        if(ans1<ans2){
            printf("Case %d: Mile %d\n",ct,ans1);
        }
        if(ans1>ans2){
            printf("Case %d: Juice %d\n",ct,ans2);
        }
        if(ans1==ans2){
            printf("Case %d: Mile Juice %d\n",ct,ans1);
        }
    }
}
