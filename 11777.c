#include<stdio.h>
#include<string.h>
#include<math.h>
long long j,res,m,a,t1,t2,c1,c2,c3,f,cases,ct=0,c;
//char str[601];

int main(){

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&cases);
    while(cases--){

        scanf("%lld %lld %lld %lld %lld %lld %lld",&t1,&t2,&f,&a,&c1,&c2,&c3);
        ct++;
        res=0;
        if(c1>=c2 && c1>=c3){
            if(c2>=c3){
                c=(c1 + c2)/2;
            }
            else{
                c=(c1 +c3)/2;
            }
        }
         if(c2>=c1 && c2>=c3){
            if(c1>=c3){
                c=(c1 + c2)/2;
            }
            else{
                c=(c2 +c3)/2;
            }
        }
           if(c3>=c1 && c3>=c2){
            if(c2>=c1){
                c=(c3 + c2)/2;
            }
            else{
                c=(c1 +c3)/2;
            }
        }
        res=c+t1+t2+f+a;
        if(res>=90){
            printf("Case %lld: A\n",ct);
        }
        if(res>=80&&res<90){
            printf("Case %lld: B\n",ct);
        }
         if(res>=70&&res<80){
            printf("Case %lld: C\n",ct);
        }
         if(res>=60 && res<70){
            printf("Case %lld: D\n",ct);
        }
         if(res<60){
            printf("Case %lld: F\n",ct);
        }
    }

}
