#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases;
int princess[4],prince[4],flag[55];

///dir array for Queen int dxq[10] = {-1,-1,-1,1,1,1,0,0};
///dir array for Queen int dyq[10] = {-1,0,1,-1,0,1,-1,1};
///dir array for knight int dxk[10] = {-2,-2,-1,-1,1,1,2,2};
///dir array for knight int dyk[10] = {1,-1,-2,2,-2,2,-1,1};
/*int leap(int year){
   	if( year%4 == 0 && year%100 == !0 )
            return 1;
	else if (year%100 == 0 && year%400 == 0)
            return 1;
	else
        return 0;
}*/
int check(int n){
    while(flag[n] == 1){
        n++;
    }
    if(n == 53)return -1;
    else return n;
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    while(scanf("%d %d %d %d %d",&princess[0],&princess[1],&princess[2],&prince[0],&prince[1])){
        if(princess[0] == 0 && princess[1] == 0 && princess[2] == 0 && prince[0] == 0 && prince[1] == 0){
            break;
        }
        memset(flag,0,sizeof flag);
        flag[prince[0]] = 1;
        flag[prince[1]] = 1;
        flag[princess[0]] = 1;
        flag[princess[1]] = 1;
        flag[princess[2]] = 1;
        sort(princess,princess + 3);
        //sort(prince,prince + 3);
        int i,j,fl = 0,index,ans=0;
        //for(i=0;i<3;i++)cout<<princess[i]<<endl;
        for(i=0;i<2;i++){
            j = 2,index = -1;
            //cout<<prince[i]<<endl;
            while((princess[j] > prince[i] && j != -1)|| (princess[j] == -10)){

                if(princess[j] != -10) index = j;
                j--;
            }
           if(index != -1) princess[index] = -10;
        }
        int r = 0;
        for(i=0;i<3;i++){
            if(princess[i] == -10){
              //  cout<<"haha "<<princess[i]<<endl;
                r++;
            }
        }
        if(r >=2)fl = 1;
        else if(r == 0){
            ans = check(1);
        }
        else{

            for(i=2;i>=0;i--){
                if(princess[i] != -10){
                    ans = check(princess[i]+1);

                    break;
                }
            }

        }
        if(fl == 1){
            printf("-1\n");
        }
        else{
            printf("%d\n",ans);
        }
    }


}
