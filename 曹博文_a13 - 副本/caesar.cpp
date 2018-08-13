#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("caesar.in","r",stdin);
	freopen("caesar.out","w",stdout);
	string s[150];
	int count=0;
	while (cin>>s[++count]);
	count--;
	for (int i=count;i>=1;i--)
		cout<<s[i]<<" ";
	return 0;
}
