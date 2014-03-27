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

ll n,ans;
ll pow_5[25];
void precompute()
{   pow_5[1]=5;
    for(int i=2;i<=20;i++) pow_5[i]=pow_5[i-1]*5LL;
}
int main()
{
    int t;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        ans=0LL;
        scanf("%lld",&n);
        int i=1;
        while(pow_5[i]<=n)
        {
            ans+=(n/pow_5[i++]);
        }
        printf("%lld\n",ans);

    }

}

