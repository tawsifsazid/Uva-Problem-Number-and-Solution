#include<bits/stdc++.h>
#define N 1005
#define  ll long long
#define pare pair<int,int>
using namespace std;

int ct=0,cases,fl = 0;
///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}*/
char A[1005];
bool compare(pare a,pare b){
    if(a.second < b.second){
        return 1;
    }
    else if(a.second == b.second){
        if(a.first > b.first)return 1;
    }
    return 0;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(A)){
        int len,i,k,B[1005];
        memset(B,0,sizeof B);
        len = strlen(A);
        for(i=0;i<len;i++){
            B[A[i]]++;
        }
        if(fl > 0)printf("\n");
        fl++;
        vector<pare>V;
        for(i=0;i<=1000;i++){
            if(B[i]!=0){
                V.push_back(pare(i,B[i]));
            }
        }
        sort(V.begin(),V.end(),compare);
        vector<pare> :: iterator j;
        for(j=V.begin();j!=V.end();j++){
            cout<<j->first<<" "<<j->second<<endl;
        }
        V.clear();
    }
}
