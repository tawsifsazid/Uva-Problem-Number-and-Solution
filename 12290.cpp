#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int rem,a,i,cases,n,b,j,m,res,g,k,flag;
int func(int c){
    while(c!=0){
        rem=c%10;
        if(rem==7){
            return 1;
        }
        c=c/10;
    }
    return 0;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %d %d",&n,&m,&k)!=EOF){
        a=0;
        b=0;
        flag=0;
        if(n==0 && m==0 && k==0)break;
        for(i=1;i<=n;i++){
            a++;
            if(i==m){
                g=a;
                if(g%7==0){
                   b++;
                    if(b==k){
                        printf("%d\n",a);
                        break;
                    }
                }
                else{
                     if(func(g))b++;
                       if(b==k){
                        printf("%d\n",a);
                        break;
                       }
                }
            }
            if(i==n){
                for(j=i-1;j>=2;j--){
                    a++;
                    if(j==m){
                        g=a;
                        if(g%7==0){
                            b++;
                            if(b==k){
                                printf("%d\n",a);
                                flag=1;
                                break;
                            }
                        }
                        else{
                            if(func(g))b++;
                            if(b==k){
                                printf("%d\n",a);
                                flag=1;
                                break;
                            }
                        }
                    }
                }
                if(flag==1)break;
                i=j-1;
            }
        }
    }
}
