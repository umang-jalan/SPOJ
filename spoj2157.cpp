#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
#include<map>
#include<set>
#include<queue>
#include<sstream>
#include<stack>
#include<ctype.h>
#include<list>
#include<iomanip>
#include<bitset>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
#define MOD 1234567891
#define EPS 1e-9

template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}

char ss[100008],ss1[100008],ss2[100008],ss3[100008];
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    string str;

    while(n--){
        getline(cin,str);
        cin.getline(ss,100008);
        sscanf(ss,"%s + %s = %s",ss1,ss2,ss3);
        bool flag=true;
        int a,b,c;
        for(int i=0;i<strlen(ss1);i++){
            if(ss1[i]=='m') flag=false;
        }
        if(flag){
            a=atoi(ss1);
            for(int i=0;i<strlen(ss2);i++){
            if(ss2[i]=='m') flag=false;
        }
        if(flag) {b=atoi(ss2); printf("%d + %d = %d\n",a,b,a+b);}
        else {b=atoi(ss3);printf("%d + %d = %d\n",a,b-a,b);}
        }
        else {a=atoi(ss2),b=atoi(ss3);printf("%d + %d = %d\n",b-a,a,b);}

    }


}
