#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

double len,wid,de,wei;
int res=0,cases;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        scanf("%lf %lf %lf %lf",&len,&wid,&de,&wei);
        if(((len<=56 && wid<= 45 && de<= 25) || len+wid+de<=125) && wei<=7){
            printf("1\n");
            res++;
        }
        else{
            printf("0\n");
        }
    }
    printf("%d\n",res);
}
