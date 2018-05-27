#include<bits/stdc++.h>

using namespace std;

int n,flag[90000000],A[90000000],ct=0;
struct B{
    int number,divisor;

}res[3000000];
bool compare(B a,B b){
    if(a.divisor<b.divisor)return 1;
    else if(a.divisor==b.divisor){
         if(a.number<b.number){
            return 1;
         }
    }
    return 0;
}
void sieve(){
    int i,j,k=0;
    for(i=1;i<=3000000;i++){
        flag[i]=0;
    }
    int sqrtn=sqrt(2000000);
    for(i=2;i<=sqrtn;i++){
        if(flag[i]==0){
            k++;
            //printf("%d\n",A[k]);
        }
        if(flag[i]==0){
            //long long sqrtn=sqrt(n);
            for( j=i*i;j<=2000000;j=j+i){
                if(flag[j]==0)flag[j]=i;
            }
        }
    }
}
int  numoffact(int n){
    int i,j,num=0;
    if(flag[n]==0){
        return 1;
    }
    else{
        while(n%flag[n]==0){
            n=n/flag[n];
            num++;
            if(flag[n]==0){
                break;
            }
        }
        num++;
        return num;
    }
}
void sorting(){
    int i,j;
    for(i=1;i<=2000000;i++){
        res[i].divisor=numoffact(i);
        res[i].number=i;
        //printf("%d = %d\n",res[i].number,res[i].divisor);
        //if(i==10)break;
    }
}
int main(){
    sieve();
    sorting();
    sort(res+1,res+2000001,compare);
    int i,a;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&a)!=EOF){
        ct++;
        if(a==0)break;
        printf("Case %d: %d\n",ct,res[a].number);
    }
}
