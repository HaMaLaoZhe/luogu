#include<stdio.h>
int main()
{
	int x, y, mx,my,i,j;
	long long left, up;
	long long map[21][21] = {0};
	int ma[21][21] = { 0 };
	int dx[8] = {-2,-1,1,2,-2,-1,1,2};
	int dy[8] = {1,2,2,1,-1,-2,-2,-1};
	scanf("%d%d%d%d", &x, &y, &mx, &my);
	if(mx<=x&&my<=y&&mx>=0&&my>=0)ma[mx][my] = 1;
	for (i = 0;i < 8;i++)
	{
		if (((mx + dx[i]) >= 0) && ((mx + dx[i]) <= x) && ((my + dy[i]) >= 0) && ((my + dy[i]) <= y))
			ma[mx + dx[i]][my + dy[i]] = 1;
	}
	if (ma[0][0] == 1)
	{
		printf("0");
		return 0;
	}
	for(i=0;i<=x;i++)
		for (j = 0;j <= y;j++)
		{
			if (i == 0 && j == 0)
			{
				map[0][0] = 1;
				continue;
			}
			if (ma[i][j] == 1)
			{
				map[i][j] = 0;
				continue;
			}
			left = (i == 0) ? 0 : map[i - 1][j];
			up = (j == 0) ? 0 : map[i][j - 1];
			map[i][j] = up + left;
		}
	printf("%lld", map[x][y]);
	return 0;
}