/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=2; i<=n; i++)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld\n",x);
#define N 100005
typedef pair <int, int> paint;
typedef long long ll;
ll mod;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
//vector<ll> v;
int main()
{
    ll t,n,ct=1;
    sc(t);

    while(t--){
        sc(n);
        cout<<((n*(n+1)*3)/2-n)%1000007<<endl;
        ct++;
    }
return 0;
}
