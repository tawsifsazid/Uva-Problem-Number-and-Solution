#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long i,cases,ct=0,j,k,res,a;
char str[109];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%lld",&cases);
    getchar();
    while(cases--){
        res=0;
        for(i=0;i<102;i++)str[i]='0';
        gets(str);
        a=strlen(str);
        ct++;
        res=0;
        for(i=0;i<a;i++){
            if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' || str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w'){
                res=res + 1;
            }
            if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' || str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x'){
                res=res + 2;
            }
            if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y'){
                res=res + 3;
            }
            if(str[i]=='z' || str[i]=='s'){
                res=res + 4;
            }
            if(str[i]==32){
                res=res + 1;
            }

        }
        printf("Case #%lld: %lld\n",ct,res);
    }
}
