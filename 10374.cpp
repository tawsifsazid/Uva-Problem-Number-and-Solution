#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,n,b,j,res,g;
//char A[300],B[300];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d\n",&cases);
    while(cases--){
         string A,B;
        //string b="independent";
        map<string,string>m;
        vector<string>x;
        scanf("%d\n",&n);
        while(n--){
            getline(cin,A);
            getline(cin,B);
            //getchar();
            m[A]=B;
            x.push_back(A);
        }
        //for(i=0;i<x.size();i++){
            //cout<<x[i]<<" "<<m[x[i]]<<endl;
        //}
        scanf("%d\n",&g);
        map<string,int>v;
        while(g--){
            getline(cin,A);
            v[A]++;
            //cout<<A<<" "<<v[A]<<endl;
        }
        int high=-1,res;
        for(i=0;i<x.size();i++){
            if(v[x[i]]>high){
                //printf("dhuke nai\n");
                high=v[x[i]];
                res=i;
            }
        }
        int eta=0;
        for(i=0;i<x.size();i++){
            if(v[x[i]]==high && v[x[i]]!=0){
                 //cout<<x[i]<<endl;
                 //printf("dhuke nai\n");
                eta++;
                if(eta>=2)break;
            }
        }
        if(eta>=2 || high==0)printf("tie\n");
        else{
                cout<<m[x[res]]<<"\n";

        }
        if(cases)printf("\n");
    }
}
