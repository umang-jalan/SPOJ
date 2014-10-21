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


int main(){

    double v[285];
    v[0]=0.0;
    v[1]=0.0;
    for(int i=2;i<=279;i++){
        v[i]=v[i-1]+ (double)1.0/(double)i;
    }
    double t;
    while(1)
    {
    scanf("%lf",&t);
    if(fabs(t)<EPS) break;
    double m=-1.0;
    for(int i=2;i<=279;i++){
        if(t>=m && t<v[i]){
            printf("%d card(s)\n",i-1); break;
        }
    }
    }
}
