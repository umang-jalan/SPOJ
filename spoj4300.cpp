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


bitset<10005> bs;
vector<int> p;
void sieve(){
bs.set();
bs[0]=bs[1]=0;
for(int i=2;i<=10000;i++){
    for(int j=i+i;j<=10000;j+=i){
        bs[j]=0;

    }
    p.push_back(i);
}

}
int f_p(int n){
    if(bs[n]==1 || n==1) return 1;
    int sz=p.size();
    int cnt=0;
    bitset<10006> bs2;
    bs2.set();
    for(int i=0;i<sz && n>1; i++){
        if(n%p[i]==0) {
            if(bs2[p[i]]) cnt++;
            while(n%p[i]==0) {n/=p[i]; bs2[n]=0;}
        }
    }
    return cnt;

}
int xyz(int n){

    int l=(int)floor(sqrt(n));
    int cnt=0;
    for(int i=1;i<=l;i++){
        if(n%i==0) cnt++;
    }
    return cnt;

}

int main(){
    int n;
   // sieve();
    scanf("%d",&n);
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        //if(bs[i]==1 || i==1) a[i]=a[i-1]+1;
        a[i]=a[i-1]+xyz(i);
        //cout<<a[i]<<" ";
    }
    //cout<<"\n";
    printf("%d\n",a[n]);



}
