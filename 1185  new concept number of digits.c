#include<stdio.h>
#include<string.h>
#include<math.h>
double array[10000009];
double fact(){
    int i,j;
    array[1]=log10(1);
    for(i=2;i<=10000000;i++){
        array[i]=array[i-1] + log10(i);
    }
}
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int cases,n,realres;
    double res;
    fact();
    scanf("%d",&cases);
    while(cases--){
       scanf("%d",&n);
       res=array[n];
       res=res + 1;
       realres=res;
       printf("%d\n",realres);
    }
}
