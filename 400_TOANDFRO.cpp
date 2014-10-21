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
char ans[207];
int main()
{
    int c,r;
    while(1)
    {
        scanf("%d",&c);
        if(c==0) break;
        string str;
        cin>>str;
        int len=str.length();
        r=len/c;
        int temp=0,z=1;
        for(int i=0;i<len;i++)
        {
            if((i+1)%c==0) {ans[temp]=str[i];temp=temp+1; z*=(-1);}
            else {ans[temp]=str[i]; temp+=(z*r);}
        }
        for(int i=0;i<len;i++) cout<<ans[i];
        printf("\n");

    }
}
