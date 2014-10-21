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

map<ll,ll> m;
ll solve(ll n){
if(n==0) return 0;
if(m.count(n)!=0) return m[n];
ll ans=-1LL;
ans=max(n,solve(n/2)+solve(n/3)+solve(n/4));
return m[n]=ans;

}
int main(){

    ll n;
    while(scanf("%lld",&n)!=EOF){
        m.clear();
        printf("%lld\n",max(n,(solve(n/2)+ solve(n/3)+ solve(n/4))));
    }
}
