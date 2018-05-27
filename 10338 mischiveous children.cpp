#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
unsigned long long int a,i,j,cases,ct=0,res,vag,flag,k;
char fact[30];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%llu",&cases);
    //getchar();
    while(cases--){
        for(i=0;i<25;i++)fact[i]=48;
        ct++;
        res=1;
        flag=0;
        vag=1;
        k=0;
        scanf("%s",fact);
        a=strlen(fact);
        //printf("%lld\n",a);
        for(i=1;i<=a;i++){
            res=res*i;
            //printf("%lld\n",res);
        }
        for(i=0;i<a;i++){
                k=1;
                vag=1;
                flag=0;
            for(j=i+1;j<a;j++){
                //flag=0;
                if(fact[i]==fact[j] && fact[j]!=48){
                    //printf("dhukd");
                    fact[j]=48;
                    k++;
                    vag=vag*k;
                    //printf("%llu\n",vag);
                    //flag=1;
                    //printf("%lld\n",vag);
                }
            }
            res=res/vag;
        }
        printf("Data set %llu: %llu\n",ct,res);
    }
}
