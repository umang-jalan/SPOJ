#include<iostream>
#include<stdio.h>
using namespace std;
int a[10][10]={{0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9}};
int main(){
int t,b,c,ans;scanf("%d",&t);while(t--){scanf("%d %d",&c,&b);if(b==0) ans=1;else{
switch(c%10){
case 0: ans=0; break;
case 1: ans=1; break;
case 2: ans=a[2][b%4]; break;
case 3: ans=a[3][b%4]; break;
case 4: ans=a[4][b%2]; break;case 5: ans=5; break;
case 6: ans=6; break;
case 7: ans=a[7][b%4]; break;
case 8: ans=a[8][b%4]; break;
case 9: ans=a[9][b%2]; break;}}
printf("%d\n",ans);
}}
