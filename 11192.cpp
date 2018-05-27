#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,a,len1,k,j,n,group;
char b[1000],ch;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&a)!=EOF){
        if(a==0)break;

        scanf("%s",b);
        len1=strlen(b);
        //printf("%d %s length %d\n",a,b,len1);
        k=0;
        group=len1/a;
        for(i=0;i<=len1;i++){
            k++;
            if(k%group==0){
                    //printf("%d %d\n",k/a,k-1);
                for(j=k-group,n=k-1;j<=n;j++,n--){
                    ch=b[j];
                    //printf("%c %c\n",b[j],b[n]);
                    b[j]=b[n];
                    b[n]=ch;
                }
            }
        }
        printf("%s\n",b);
    }
}
