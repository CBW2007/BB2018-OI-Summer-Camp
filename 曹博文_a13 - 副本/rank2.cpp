#include<cstdio>
#include<algorithm>
#define INF 2000000000
using namespace std;
struct thing
{
	int id;
	int score[11];
};
thing student[15];
int n,k;
bool cmp(thing x,thing y)
{
	if (x.score!=y.score)
		return x.score[0]>y.score[0];
	for (int i=1;i<=k;i++)
		if (x.score[i]!=y.score[i])
			return x.score[i]>y.score[i];
	return x.id<y.id;
}
int main()
{
	freopen("rank.in","r",stdin);
	freopen("rank2.out","w",stdout);
	int e=10;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=10;i++)
	{
		student[i].id=INF;
		student[i].score[0]=-INF;
		for (int j=1;j<=k;j++)
			student[i].score[j]=-INF;
	}
	for (int i=1;i<=n;i++)
	{
		thing t;
		scanf("%d",&t.id);
		t.score[0]=0;
		for (int j=1;j<=k;j++)
		{
			scanf("%d",&t.score[j]);
			t.score[0]+=t.score[j];
		}
		for (int j=1;j<=10;j++)
			if (cmp(t,student[j]))
			{
				for (int k=10;k>j;k--)
					student[k]=student[k-1];
				student[j]=t;
				break;
			}
	}
	for (int i=1;i<=10;i++)
		printf("%d ",student[i].id);
	return 0;
}
