#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

int high=0,i,j,k,res,ct,cases,n,len,flag;
//char A[20000];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a;
    string b,c;
    while(cin>>a){
           res=0;
           c="";
          //cout<<a<<endl;
         if(a=="E-N-D")break;
        //int sa=a.size();
        //printf("%d\n",sa);
        for(i=0;i<a.size();i++){
            if((a[i]>=65 && a[i]<=90)){
                a[i]=a[i]+32;
                c=c+a[i];
               ///cout<<a[i]<<endl;
                res++;
            }
            else if((a[i]>=97 && a[i]<=122)){
                res++;
                c=c+a[i];
                //cout<<a[i]<<endl;
            }
            else if(a[i]=='-'){
                res++;
                c=c+a[i];
               //cout<<a[i]<<endl;
            }
        }
    //printf("%d\n",res);
        //cout<<a<<endl;
        if(res>high){
            b=c;
            high=res;
        }
    }
        cout<<b<<endl;

}
