#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	int lena,lenb,lenc;
	char s1[5005],s2[5005];
	int a[5005]={0},b[5005]={0},c[5005]={0};
	cin>>s1>>s2;
	lena=strlen(s1);
	lenb=strlen(s2);
	for (int i=0;i<lena;i++)
		a[lena-i]=s1[i]-'0';
	for (int i=0;i<lenb;i++)
		b[lenb-i]=s2[i]-'0';
	lenc=(lena>lenb)?lena:lenb;
	for (int i=1;i<=lenc;i++)
	{
		c[i]+=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	if (c[lenc+1]!=0)
		lenc++;
	for (;lenc>=1;lenc--)
		if (c[lenc]!=0)
			break;
	if (lenc==0)
		lenc++;
	for (int i=lenc;i>=1;i--)
		cout<<c[i];
	return 0;
}
