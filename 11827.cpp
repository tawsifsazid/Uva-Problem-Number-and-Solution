#include<bits/stdc++.h>

using namespace std;

int rem,len,cases,i,j,number[200],res,k,maxx;
char temp[50000],A[1000005];
int gcd(int a,int b){
    //printf("%d %d\n",a,b);
     while(b>0){
        a=a%b;
        //a^=b;b^=a;a^=b;
        swap(a,b);
    }
    return a;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    getchar();
    while(cases--){
        maxx=0;
        res=0;
        k=0;
        gets(A);
        len=strlen(A);
        for(i=0;i<len;i++){
            //printf("%d\n",i);
            if(isdigit(A[i])){
                int v=0;
                for(j=i;isdigit(A[j])&&j<len;j++){
                    temp[v]=A[j];
                    v++;
                }
                temp[v]=NULL;
                k++;
                number[k]=atoi(temp);
                i=j;
                //printf("i==j erprer line %d\n",i);
            }
        }
        for(i=1;i<=k;i++){
            for(j=i+1;j<=k;j++){
                //printf("%d %d\n",number[j],number[i]);
                res=gcd(number[i],number[j]);
                //printf("%d\n",res);
                if(maxx<res){
                    maxx=res;
                     //printf("maxx ==%d\n",maxx);
                }
            }
        }
        printf("%d\n",maxx);
    }
}
