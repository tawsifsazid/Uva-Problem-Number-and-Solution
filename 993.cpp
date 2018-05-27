#include<bits/stdc++.h>

using namespace std;
///timus er ta dekhoo :D :D o allah
int i,j,k=1,cases,n,fl,res[32000],l;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
      memset(res , 0, sizeof res);
      scanf("%d",&n);
       if(n<10)printf("%d\n",n);
       else{
            int divisor=9;
            l=0;
            while(divisor > 1){
                while(n % divisor == 0){
                    res[l]=divisor;
                    n=n/divisor;
                    l++;
                }
                divisor--;
            }
            if(n==1){
                sort(res , res + l);
                for(i=0;i<l;i++){
                    printf("%d",res[i]);
                }
                printf("\n");
            }
            else{
                printf("-1\n");
            }
       }
    }
}
