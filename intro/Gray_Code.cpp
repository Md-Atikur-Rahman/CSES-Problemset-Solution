#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define PB push_back
#define All(x) (x).begin(),(x).end()
#define MP make_pair
#define nl "\n"
typedef pair<int,int>PII;
typedef vector<int>VI;
typedef vector<PII>VPII;
typedef vector<VI>VVI;
typedef vector<long long>VL;
typedef vector <VL>VVl;
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

void Engine()
{
    int n; cin>>n;
    string s; 
    for(int i=0; i<n; i++)s.push_back('0');

    int len=pow(2,n)+0.00000001;

    cout<<s<<nl;

    for(int i=1; i<len; i++)
    {
        for(int j=0; ; j++)
        {
            if((1<<j)&i)
            {
                if(s[n-1-j]=='0')s[n-1-j]='1';
                else s[n-1-j]='0';
                cout<<s<<nl;
                break;
            }
        }
    }
}

int main()
{
    FastIO
    int tt=1;
    //cin>>tt;
    for(int tc=1; tc<=tt; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        Engine();
    }
    return 0;
}  