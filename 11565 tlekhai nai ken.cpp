#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int i,j,k,a,b,c,d,x,y,z,cases,flag;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d",&cases);
    while(cases--){
            flag=0;
        scanf("%d %d %d",&a,&b,&c);
        for(x=-100;x<=100;x++){
            for(y=-100;y<=100;y++){
                for(z=-100;z<=100;z++){
                    if(x!=y && y!=z && z!=x && x+y+z==a && x*y*z==b && (x*x)+(y*y)+(z*z)==c){
                        printf("%d %d %d\n",x,y,z);
                        flag=1;
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)break;
        }
        if(flag==0)printf("No solution.\n");
    }
}
