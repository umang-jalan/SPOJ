/*
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate
all prime numbers between two given numbers!
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
#define MOD 1000000009
#define MAX 1000000

template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}
bitset<1000005> bs;
vector<ll> v;
void Sieve()
{
    bs.set();
    bs[0]=0;bs[1]=0;
    for(int i=2;i<=MAX;i++)
    {
        if(bs[i])
        {
            for(int j=i+i;j<=MAX;j+=i) bs[j]=0;
            v.push_back(i);
        }
    }
}
ll n,m;
bool isPrime(ll i)
{
    for(int j=0;j<v.size() && (v[j]*v[j] <=i);j++)
    {
        if(i%v[j]==0) return false;
    }
    return true;
}
int main()
{
    int t;
    Sieve();
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld %lld",&n,&m);
    for(ll i=n;i<=m;i++)
    {
        if(i<=1000000LL) { if(bs[i]) printf("%lld\n",i);}
        else {
            if(isPrime(i))  printf("%lld\n",i);
        }
    }
    }
}




