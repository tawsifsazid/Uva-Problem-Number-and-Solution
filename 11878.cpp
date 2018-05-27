#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int a,i,cases,n,b,j,res1,g,correct=0;
char ch,l,res[5];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d %c %d %c %s",&a,&ch,&b,&l,res)!=EOF){
        if(ch=='+'){
             //printf("dhukse\n");
           g=strlen(res);
           if(res[0]=='?'){

           }
           else{
                res1=atoi(res);
                //printf("res1=%d\n",res1);
                if(res1==(a+b)){
                    correct++;
                }
           }
        }
        else if(ch=='-'){
            g=strlen(res);
           if(res[0]=='?'){

           }
           else{
                res1=atoi(res);
                //printf("res1=%d\n",res1);
                if(res1==(a-b)){
                    correct++;
                }
           }
        }
    }
    printf("%d\n",correct);
}
