#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int c[105];
bool prime(int num)
{
	if (num<=1)
		return false;
	if (num==2)
		return true;
	if (num%2==0)
		return false;
	for (int i=3;i*i<=num;i+=2)
		if (num%i==0)
			return false;
	return true;
}
void fj(int k)
{
	if (k==1)
		return;
	for (int i=2;i<=k;i++)
		if (k%i==0&&prime(i))
		{
			c[i]++;
			fj(k/i);
			break;
		}
}
int main()
{
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);
	int n;
	long long count=1;
	cin>>n;
	for (int i=2;i<=n;i++)
		fj(i);
	for (int i=2;i<=100;i++)
		if (c[i]!=0)
		{
			c[i]+=1;
			count*=c[i];
		}
	cout<<count;
	return 0;
}
