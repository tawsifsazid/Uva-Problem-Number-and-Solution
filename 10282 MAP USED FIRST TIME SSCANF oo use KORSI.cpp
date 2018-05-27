#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

int i,cases,n,b,j,res,g;
map<string,string>m;
char eng[100],foreign[100],s[100],str[100];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(str)){
       // printf(str);
       //printf("\n");
        if(strlen(str)==0){
                //printf("dhukse");
                break;
        }
        sscanf(str,"%s %s",eng,foreign);
        m[foreign]=eng;
    }
    while(scanf("%s",s)!=EOF){
        if(m[s]==""){
            printf("eh\n");
        }
        else{
            cout<<m[s]<<endl;
        }
    }
}
