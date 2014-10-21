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
    ll n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        //if(n==-1) break;
        ll a[n+1];
        int sum=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum=(sum%n + a[i]%n)%n;
        }
        //ll avg=sum/n;
        //cout<<(avg*n)<<" "<<sum<<"\n";
        if(sum) printf("NO\n");
        else{
            printf("YES\n");
        }
    }

}
