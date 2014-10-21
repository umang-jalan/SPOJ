#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
#define MOD 1000000009


template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}
ll ans[100000];
ll len;
ll cal(int n)
{
    len=1LL;
    ans[0]=1LL;
    ll cr=0LL;
    for(int j=1;j<=n;j++)
    {
            for(int i=0;i<len;i++)
            {
                ll temp=(ans[i]*j + cr);
                cr=temp/10;
                ans[i]=temp%10;;
            }
           while(cr)
           {
               ans[len++]=cr%10;
               cr/=10;
           }
    }
    return len;
}
int t,n;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ll x=cal(n);
        for(int i=x-1;i>=0;i--) printf("%lld",ans[i]);
        printf("\n");
    }
}
