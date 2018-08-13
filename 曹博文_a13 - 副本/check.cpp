#include<iostream>
#include<cstdio>
#include<ctime>
#include<algorithm>
#include<windows.h>
using namespace std;
int main()
{
	freopen("rank.in","w",stdout);
	srand(time(0));
	int n=100000,k=10;
	cout<<n<<" "<<k<<endl;
	for (int i=1;i<=n;i++)
	{
		cout<<i<<" ";
		for (int j=1;j<=k;j++)
		{
			int t;
			t=rand()%100;
			cout<<t<<" ";
		}
		cout<<endl;
	}
	freopen("report.txt","w",stdout);
	long long start,end;
	start=clock();
	system("rank.exe");
	end=clock();
	cout<<"程序1用时"<<(end-start)/1000.0<<"毫秒"<<endl;
	start=clock();
	system("rank2.exe");
	end=clock();
	cout<<"程序2用时"<<(end-start)/1000.0<<"毫秒"<<endl;
	system("fc /W /A rank.out rank2.out");
	return 0; 
}
