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

int i,cases,n,j,res,g;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a,b;
    vector<string>x;
    vector<string>p;
    map<string,int>k;
    //map<string,int>z;
    while(cin>>a){
           if(a=="#")break;
           x.push_back(a);
           b=a;
        for(i=0;i<b.size();i++){
            if(b[i]>=65 && b[i]<=90){
                b[i]=b[i]+32;
            }
        }
            sort(b.begin(),b.end());
            p.push_back(b);
    }
     for(i=0;i<p.size();i++){
                for(j=i+1;j<p.size();j++){
                    if(p[i]==p[j] ){//&& k[p[i]]!=-1 && k[p[j]]!=-1){
                        //cout<<"dhukse "<<p[i]<<" "<<p[j]<< endl;
                        //cout<<"dhukse "<<x[i]<<" "<<x[j]<< endl;
                        k[p[i]]=-1;
                        k[p[j]]=-1;
                        k[x[i]]=-1;
                        k[x[j]]=-1;
                        //z[x[i]]=-1;
                        //z[x[j]]=-1;
                    }
                }
            }
        sort(x.begin(),x.end());
            for(i=0;i<x.size();i++){
                if(k[x[i]]!=-1){
                    cout<<x[i]<<endl;
                }
            }
}
