#include<bits/stdc++.h>
#define N 200005
#define ll long long
#define llu unsigned long long int
#define pare pair<int,int>
#define mod 1000000007

int ct=0,cases;

using namespace std;

map<string ,string>M;
map<string ,string>P;
string card[105];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
M["AC"] = "0";
M["KC"] = "1";
M["QC"] = "2";
M["JC"] = "3";
M["TC"] = "4";
M["9C"] = "5";
M["8C"] = "6";
M["7C"] = "7";
M["6C"] = "8";
M["5C"] = "9";
M["4C"] = "10";
M["3C"] = "11";
M["2C"] = "12";

M["AD"] = "13";
M["KD"] = "14";
M["QD"] = "15";
M["JD"] = "16";
M["TD"] = "17";
M["9D"] = "18";
M["8D"] = "19";
M["7D"] = "20";
M["6D"] = "21";
M["5D"] = "22";
M["4D"] = "23";
M["3D"] = "24";
M["2D"] = "25";


M["AH"] = "26";
M["KH"] = "27";
M["QH"] = "28";
M["JH"] = "29";
M["TH"] = "30";
M["9H"] = "31";
M["8H"] = "32";
M["7H"] = "33";
M["6H"] = "34";
M["5H"] = "35";
M["4H"] = "36";
M["3H"] = "37";
M["2H"] = "38";

M["AS"] = "39";
M["KS"] = "40";
M["QS"] = "41";
M["JS"] = "42";
M["TS"] = "43";
M["9S"] = "44";
M["8S"] = "45";
M["7S"] = "46";
M["6S"] = "47";
M["5S"] = "48";
M["4S"] = "49";
M["3S"] = "50";
M["2S"] = "51";

   scanf("%d",&cases);
   while(cases--){
        ct++;
        int i,j,k,rem=52;
        for(i=52;i>=1;i--){
            cin>>card[i];
        }
        int y = 0,loop = 3,val = 0,sorabo;
        map<string,string> :: iterator mm;
        //cout<<card[1]<<endl;
        while(loop --){
                //cout<<loop<<endl;
            string top = card[26];
            if((top[0] == 'T' ) || top[0] == 'A' || top[0] == 'K' || top[0] == 'Q' || top[0] == 'J'){
                  val = 10;
                  y = y + 10;
            }
            else{

                val = top[0] - '0';
               // cout<<top[0]<<" val = "<<val<<endl;
                y = y + val;
            }
            sorabo = 10 - val + 1;
           // cout<<"sorailam "<<sorabo<<endl;
            rem = rem - sorabo;
            //cout<<"rem = "<< rem<<endl;
            int u = 52 - sorabo;
            k = 0;
            i = 26;
            j = sorabo + 1;
            //cout<<u<<" val "<<val<<endl;
            //break;
            while(u --){
                card[i] = card[j];
                //cout<<card[j]<<" "<<card[i]<<endl;
                i++;
                j++;
                //break;
            }
            //cout<<" now card "<<card[26]<<endl;
        }
        //cout<<y<<endl;
        int ans = rem - y + 1;
        cout<<"Case "<<ct<<": "<<card[ans]<<endl;


   }

}
