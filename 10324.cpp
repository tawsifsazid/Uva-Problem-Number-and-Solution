#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

long long v,flag,res,len,cases,a,b,i,j,ct=0;
char A[1000007];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s",A)!=EOF){
        len=strlen(A);
        if(len==0)break;
        //if(len==3 && A[0]=='0' && A[2]=='0')break;
        ct++;
        flag=1;
        scanf("%lld",&cases);
        getchar();
        printf("Case %lld:\n",ct);
        while(cases--){
                flag=1;
           scanf("%lld %lld",&a,&b);
           getchar();
           if(a>b){
            v=a;
            a=b;
            b=v;
           }
            for(i=a;i<b;i++){
                    if(A[i]==A[i+1]){

                    }
                    else{
                        flag=0;
                        break;
                    }
            }
            if(flag==1)printf("Yes\n");
            else{
                printf("No\n");
            }
        }

    }
}
