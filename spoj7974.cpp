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


template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}


int main(){
    int a,b,c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0) break;
        int x=(b-a),y=(c-b);
        if(x==y){
            printf("AP %d\n",(c+x));
        }
        else{
            printf("GP %lld\n",((ll)c*((ll)b/a)));
        }


    }
}
