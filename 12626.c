#include<stdio.h>
#include<string.h>
#include<math.h>
long long j,res,m,a,r,i,t,g,cases;
char str[601];

int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&cases);
    getchar();
    while(cases--){
        scanf("%s",str);
        m=0;
        a=0;
        r=0;
        i=0;
        t=0;
        g=0;
        res=0;
        for(j=0;str[j]!=NULL;j++){
            if(str[j]=='M'){
                m++;
            }
             if(str[j]=='A'){
                a++;
            }
             if(str[j]=='R'){
                r++;
            }
             if(str[j]=='G'){
                g++;
            }
             if(str[j]=='I'){
                i++;
            }
             if(str[j]=='T'){
                t++;
            }
        }
        while(m>=1 && a>=3 && r>=2 && i>=1 && t>=1 && g>=1){
            res++;
            m--;
            a=a-3;
            r=r-2;
            i--;
            t--;
            g--;
        }
        printf("%lld\n",res);
    }
}
