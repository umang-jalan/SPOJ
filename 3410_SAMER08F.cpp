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
int n;
int eval(int n)
{
    return (n*(n+1)*(2*n+1))/6;
}
int main()
{
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        printf("%d\n",eval(n));
    }
}
