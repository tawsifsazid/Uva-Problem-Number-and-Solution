#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int i,cases,b,j,res,ct=0;
char A[200];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
        ct++;
        int high=0;
        map<string,int>m;
        vector<string>n;
        for(i=1;i<=10;i++){
            scanf("%s %d",A,&b);
            m[A]=b;
            n.push_back(A);
            if(high<b){
                high=b;
            }
        }
        //sort(n.begin(),n.end());
        cout<<"Case"<<" "<<"#"<<ct<<":"<<endl;
        for(i=0;i<n.size();i++){
            if(m[n[i]]==high){
                cout<<n[i]<<endl;
            }
        }
    }
}
