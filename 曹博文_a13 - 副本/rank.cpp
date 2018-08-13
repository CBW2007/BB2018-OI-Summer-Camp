#include<cstdio>
#include<algorithm>
using namespace std;
struct thing
{
	int id;
	int score[11];
};
thing student[100005];
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
	freopen("rank.out","w",stdout);
	int e=10;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&student[i].id);
		student[i].score[0]=0;
		for (int j=1;j<=k;j++)
		{
			scanf("%d",&student[i].score[j]);
			student[i].score[0]+=student[i].score[j];
		}
	}
	sort(student+1,student+n+1,cmp);
	for (int i=1;i<=10;i++)
		printf("%d ",student[i].id);
	return 0;
}
