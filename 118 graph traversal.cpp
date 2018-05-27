#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007
using namespace std;

int ct=0,cases,x,y,r,c;
char ch;
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

        cin>>r>>c;
         int A[205][205];
         memset(A,0,sizeof A);
        while(cin>>x>>y>>ch){
            int mov = 0,fl = 0;

            if(ch == 'N'){
                mov = 1;
                //cout<<"N"<<endl;
            }
            else if(ch == 'E'){
                mov = 2;
                //cout<<"East"<<endl;
            }
            else if(ch == 'S'){
                mov = 3;
                //cout<<"S"<<endl;
            }
            else{
                mov = 4;
                //cout<<"W"<<endl;
            }
            char str[205];

            scanf("%s",str);
            int len = strlen(str);
            for(int i=0;i<len;i++){
                if(fl == 0){
                    if(str[i] == 'R'){
                        if(mov == 1){
                            mov = 2;
                            //cout<<"E"<<endl;
                        }
                        else if(mov == 2){
                            mov = 3;
                            //cout<<"S"<<endl;
                        }
                        else if(mov == 3){
                            mov = 4;
                            //cout<<"W"<<endl;
                        }
                        else{
                            mov = 1;
                            //cout<<"N"<<endl;
                        }
                    }
                    else if(str[i] == 'L'){
                        if(mov == 1){
                            mov = 4;

                        }
                        else if(mov == 2){
                            mov = 1;
                        }
                        else if(mov == 3){
                            mov = 2;
                        }
                        else{
                            mov  = 3;
                        }
                    }
                    else if(str[i] == 'F'){
                        if(mov == 1){
                            y = y + 1;
                            if(y<0 || y>c || x<0 || x>r){
                                if(A[x][y-1]!=1){
                                    A[x][y-1] = 1;
                                    fl = 1;

                                }
                                y = y - 1;
                            }
                            //cout<<"moved"<<" "<<x<<" "<<y<<endl;
                        }
                        else if(mov == 2){
                            x = x + 1;
                            if(y<0 || y>c || x<0 || x>r){
                                if(A[x-1][y]!=1){
                                    A[x-1][y] = 1;
                                    fl = 1;
                                }
                                x = x - 1;
                            }
                            //cout<<"moved"<<" "<<x<<" "<<y<<endl;
                        }
                        else if(mov == 3){
                            y = y - 1;
                            if(y<0 || y>c || x<0 || x>r){
                                if(A[x][y+1]!=1){
                                    A[x][y+1] = 1;
                                    fl = 1;
                                }
                                 y  = y + 1;
                            }
                            //cout<<"moved in dir S "<<" "<<x<<" "<<y<<endl;
                        }
                        else{
                            x = x - 1;
                            if(y<0 || y>c || x<0 || x>r){
                                if(A[x+1][y]!=1){
                                    A[x+1][y] = 1;
                                    fl = 1;
                                }
                                x = x + 1;
                            }
                            //cout<<"moved"<<" "<<x<<" "<<y<<endl;
                        }
                    }
                }
                else{
                    break;
                }
            }
            map<int,char>M;
            M[1] = 'N';
            M[2] = 'E';
            M[3] = 'S';
            M[4] = 'W';
            if(fl == 1){
                cout<<x<<" "<<y<<" "<<M[mov]<<" LOST"<<endl;
            }
            else cout<<x<<" "<<y<<" "<<M[mov]<<endl;
        }


}
