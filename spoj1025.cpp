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
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        ll ans=0LL;
        for(int i=n-1;i>=0;i--) ans+=(a[i]*b[i]);
        printf("%lld\n",ans);
    }

}
