/*Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and
Everything. More precisely... rewrite small numbers from input to output. Stop processing input after
reading in the number 42. All numbers at input are integers of one or two digits.*/


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

int main()
{
    int a;
    bool flag=true;

	while(scanf("%d",&a)!=EOF)
	{
		if(a==42) flag=false;
		if(flag) printf("%d\n",a);
	}
}
