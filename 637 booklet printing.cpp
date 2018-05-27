#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases,n;

using namespace std;

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


int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n == 0)break;
        int i,j,k;
        int  front=1,back,sheet;
        sheet = ceil((double)n/4);
        //cout<<sheet<<endl;
        back=sheet*4;
        int loop = back;
        if(n == 1){
            printf("Printing order for 1 pages:\nSheet 1, front: Blank, 1\n");
        }
        else{
                printf("Printing order for %d pages:\n",n);
            for(i=1;i<=sheet;i++){
                if(back > n){
                    printf("Sheet %d, front: Blank, %d\n",i,front);
                    back--;
                    front++;
                }
                else if(back <= n){
                    printf("Sheet %d, front: %d, %d\n",i,back,front);
                    back--;
                    front++;
                }
                if(back > n){
                    printf("Sheet %d, back : %d, Blank\n",i,front);
                    back--;
                    front++;
                }
                else if(back <= n){
                    printf("Sheet %d, back : %d, %d\n",i,front,back);
                    back--;
                    front++;
                }
             //Sheet 1, front: Blank, 1
             //Sheet 1, back : 2, Blank
            }
        }
    }

}
