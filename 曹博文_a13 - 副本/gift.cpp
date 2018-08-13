#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
ll g[25];
ll f(int m)
{
	if (g[m]!=0)
		return g[m];
	if (m==1)
		return 0;
	if (m==2)
		return 1;
	g[m]=(m-1)*(f(m-2)+f(m-1));
	return g[m];
}
int main()
{
	freopen("gift.in","r",stdin);
	freopen("gift.out","w",stdout);
	g[1]=0;
	g[2]=1;
	ll n;
	cin>>n;
	cout<<f(n);
	return 0;
}
