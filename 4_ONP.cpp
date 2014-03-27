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
char str[500];
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%s",str);
      int len=strlen(str);
      stack<char> s;
      string ans="";
      for(int i=0;i<len;i++)
      {
          if(str[i]=='(' || str[i]=='*' || str[i]=='/' || str[i]=='^' || str[i]=='+' || str[i]=='-') s.push(str[i]);
          else if(str[i]==')')
          {
              char ch=s.top();
              while(!s.empty() && ch!='(')
              {
                  s.pop();
                  ans+=ch;
                  ch=s.top();
              }
              if(ch=='(') s.pop();
          }
          else ans+=str[i];
      }
      cout<<ans<<"\n";
  }
}

