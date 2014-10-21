//WRONG FOr large numbers

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
ll ans[20008];
ll len;
ll cal(int a,int b)
{
    len=0;
    while(a)
    {
        ans[len++]=a%10;
        a/=10;
    }
    ll cr=0LL;
    int j=b;
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

    return len;
}
int t,a,b;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        ll x=cal(a,b);
        for(int i=x-1;i>=0;i--) printf("%lld",ans[i]);
        printf("\n");
    }
}
