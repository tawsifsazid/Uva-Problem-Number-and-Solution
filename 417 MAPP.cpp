#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int i,cases,n,b,j,m,res,g,k,l,countt=1;
char A[50];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    map<string,int>mymap;
    string a= "abcdefghijklmnopqrstuvwxyz";
    string s,s1,s2,s3,s4,s5;
    for(i=0;i<26;i++){
        s=a[i];
        mymap[s]=countt;
        countt++;
    }
    for(i=0;i<26;i++){
            s1=a[i];
        for(j=i+1;j<26;j++){
            s2=a[j];
            s=s1+s2;
            mymap[s]=countt;
            countt++;
        }
    }
    for(i=0;i<26;i++){
        s1=a[i];
        for(j=i+1;j<26;j++){
            s2=a[j];
            for(k=j+1;k<26;k++){
                s3=a[k];
                s=s1+s2+s3;
                mymap[s]=countt;
                countt++;
            }
        }
    }
    for(i=0;i<26;i++){
           s1=a[i];
        for(j=i+1;j<26;j++){
            s2=a[j];
            for(k=j+1;k<26;k++){
                s3=a[k];
                for(l=k+1;l<26;l++){
                    s4=a[l];
                    s=s1+s2+s3+s4;
                    mymap[s]=countt;
                    countt++;
                }
            }
        }
    }
    for(i=0;i<26;i++){
           s1=a[i];
        for(j=i+1;j<26;j++){
            s2=a[j];
            for(k=j+1;k<26;k++){
                s3=a[k];
                for(l=k+1;l<26;l++){
                    s4=a[l];
                    for(m=l+1;m<26;m++){
                        s5=a[m];
                        s=s1+s2+s3+s4+s5;
                        mymap[s]=countt;
                        countt++;
                    }
                }
            }
        }
    }
    while(scanf("%s",A)!=EOF){
        if(mymap[A]){
            printf("%d\n",mymap[A]);
        }
        else{
            printf("0\n");
        }
    }
}
