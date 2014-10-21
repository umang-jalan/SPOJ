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

int t,x,y;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
             if((x-2>=0 && y==x-2) || y==x) {
                if(x&1) printf("%d\n",(x+y-1));
                else printf("%d\n",(x+y));
             }
             else printf("No Number\n");

    }
}
