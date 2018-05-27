#include<bits/stdc++.h>

using namespace std;

int n,t,A[60],res[530300],T[100];
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a,int b,int c,int d){
    int Y[6];
    Y[1]=a;
    Y[2]=b;
    Y[3]=c;
    Y[4]=d;
    int i,j,fl=0,L=Y[1];
    for(i=2;i<=4;i++){
        L=((L/gcd(L,Y[i]))*Y[i]);
    }
    return L;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d",&n,&t)!=EOF){
        if(n==0 && t==0)break;
        int i,j,k,l,m=0;
        for(i=1;i<=n;i++){
            scanf("%d",&A[i]);
        }
        for(i=1;i<=t;i++){
            scanf("%d",&T[i]);
        }
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    for(l=k+1;l<=n;l++){
                        //printf("%d %d %d %d\n",A[i],A[j],A[k],A[l]);
                         m++;
                         res[m]=lcm(A[i],A[j],A[k],A[l]);
                         //printf("LCM = %d\n",res[m]);
                    }
                }
            }
        }
        int large=0,gun,small=0,resultbig,resultsmall,LCM;
       for(j=1;j<=t;j++){
            resultbig=0;
            resultsmall=0;
            for(i=1;i<=m;i++){
                    LCM=res[i];
                    gun=0;
                    large=0;
                    small=0;
                //printf("%d %d\n",temp,T[j]);
                //break;
                while(1){
                    gun++;
                //printf("asd");
                    if(LCM*gun>=T[j]){
                         //printf("%d\n",LCM*gun);
                        large=LCM*gun;
                        if(large<resultbig || resultbig==0){
                            resultbig=large;
                            //printf("%d\n",resultbig);
                        }
                        break;
                    }
                }
                gun=0;
                LCM = res[i];
                while(1){
                        if(LCM > T[j]){
                            break;
                        }
                        small=large-(LCM*gun);
                        if(small<=T[j]){
                            if(small>resultsmall || resultsmall==0){
                                resultsmall=small;
                            }
                            break;
                        }
                        gun++;
                }
            }
            printf("%d %d\n",resultsmall,resultbig);
       }

    }
}
