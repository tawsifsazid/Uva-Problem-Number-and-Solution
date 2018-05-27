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

int i,cases,n,b,j,res,g;
char A[4000],B[500];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     map<string,int>x;
    vector<string>m;
    scanf("%d\n",&cases);
    while(cases--){
        scanf("%s\n",B);
        x[B]++;
        gets(A);
        m.push_back(B);
    }
    sort(m.begin(),m.end());
    string b;
    for(i=0;i<m.size();i++){
        if(b==m[i]){

        }
        else{
            cout<<m[i]<<" "<<x[m[i]]<<endl;
            b=m[i];
        }
    }
}
