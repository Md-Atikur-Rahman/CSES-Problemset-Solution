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
    int n,m,x; cin>>n>>m;
    multiset<int> s;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }

    multiset<int>::iterator it;

    for(int i=0; i<m; i++)
    {
        cin>>x;
        if(s.empty())
        {
            cout<<-1<<nl;
            continue;
        }

        it=s.upper_bound(x);
        if(it==s.begin())
        {
            cout<<-1<<nl;
        }
        else
        {
            it--;
            cout<<*it<<nl;
            s.erase(it);
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