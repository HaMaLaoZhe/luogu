#include<stdio.h>
int main()
{
	int n,i,j,x,y,t=-1;
	scanf("%d", &n);
	int carpet[n+1][4];
	for (i = 1;i <= n;i++)
		for (j = 0;j < 4;j++)
			scanf("%d",&carpet[i][j]);
	scanf("%d %d", &x, &y);
	for (i = 1;i <= n;i++)
	{
		if (((x >= carpet[i][0]) && (x <= carpet[i][0] + carpet[i][2])) && ((y >= carpet[i][1]) && (y <= carpet[i][1] + carpet[i][3])))
			t = i;
	}
	printf("%d",t);
	return 0;
}