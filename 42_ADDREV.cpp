#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
#define MOD 1000000009

//FAST IO
template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}

ll rev(ll n)
{
    ll res=0LL;
    while(n)
    {
        res=(res*10) + n%10;
        n/=10;
    }
    return res;
}
ll n,m;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",rev(rev(n)+ rev(m)));
    }
}

