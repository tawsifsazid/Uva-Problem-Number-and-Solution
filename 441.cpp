#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,a,b,c,d,e,f,k,res,cases,A[20],flag=0;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%lld",&k)!=EOF){
        if(k==0)break;
        if(flag==0){

        }
        else{
            printf("\n");
        }
        for(i=0;i<k;i++){
            scanf("%lld",&A[i]);
        }
        for(a=0;a<k-5;a++){
            for(b=a+1;b<k-4;b++){
                for(c=b+1;c<k-3;c++){
                    for(d=c+1;d<k-2;d++){
                        for(e=d+1;e<k-1;e++){
                            for(f=e+1;f<k;f++){
                                printf("%lld %lld %lld %lld %lld %lld\n",A[a],A[b],A[c],A[d],A[e],A[f]);
                            }
                        }
                    }
                }
            }
        }
        flag++;
    }
}
