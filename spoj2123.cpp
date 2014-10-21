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



int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==-1) break;
        int a[n+1];
        int sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int avg=sum/n;
        if(avg*n != sum) printf("-1\n");
        else{
            sum=0;
            for(int i=0;i<n;i++){
                if(avg-a[i] > 0) sum+=(avg-a[i]);
            }
            printf("%d\n",sum);
        }
    }

}
