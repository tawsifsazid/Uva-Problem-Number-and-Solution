#include<bits/stdc++.h>

///Note:::more optimization required:: i<=sqrt(1000000)!
///Sieve of eratosthenes
///LINK-> http://lightoj.com/article_show.php?article=1001
///


using namespace std;

int res,i,j,n,k=1,flag[10000006],A[20000006],sqrtn=sqrt(2000000000);

void sieve(){
    A[k]=2;
    for(i=3;i<=sqrtn;i=i+2){
        if(flag[i]==0){
            k++;
            A[k]=i;
            //printf("%d\n",A[k]);
        }
        if(flag[i]==0){
            for(j=i*i;j<=sqrtn;j=j+i){
                flag[j]=-1;
            }
        }
    }
}
int euler(int a){
    //printf("%d\n",A[1]);
    int num=a;
    sqrtn=sqrt(a);
    for(i=1;i<=k && A[i]<=sqrtn; i++){
        if(a % A[i] == 0){
            while( a % A[i] == 0 ){
                a=a/A[i];
            }
            sqrtn=sqrt(a);
            num=num/A[i];
            num=num*(A[i]-1);
        }
    }
    if(a!=1){
        num = num / a;
        num = num*(a-1);
    }
    return num;
}
int main(){
    sieve();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
       if(n==1)printf("0\n");
       else{
            res=euler(n);
            printf("%d\n",res);
       }
    }
}
