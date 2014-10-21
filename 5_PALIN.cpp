//WRONG

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


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.length();
        if(len==1)
        {
            if(str[0]=='9') printf("11\n");
            else printf("%d\n",(str[0] - '0' +1));
        }
        else
        {

        string str1=string(str.substr(0,len/2));
        string str2=string(str1.rbegin(),str1.rend());
        if(len&1){
        //string ans=str1+(str[len/2] - '0' +1)+str2;
        cout<<str1<<(str[len/2] - '0' +1)<<str2<<"\n";

        }
        else{
           if(str[len/2-1]>str[len/2]) cout<<str1<<str2<<"\n";
           else
           {   string str3=str.substr(0,len/2-1);
               string str4=string(str3.rbegin(),str3.rend());
               cout<<str3<<(str[len/2-1] - '0' +1)<<(str[len/2-1] - '0' +1)<<str4<<"\n";
           }
        }
        }



    }
}
