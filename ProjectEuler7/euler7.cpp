#include<stdio.h>
int main()
{
	int i, j, flag, y;
	long long int n;
	int prime[100];
	n = 10000000;
	y = 0;
	//scanf("%d",&n)
	for (i = 2;i < n;i++) {
		flag = 0;
		for (j = 2;j < n/2 ;j++)
		{
			if (i % j == 0 && j != i) {
				flag = 1;
				break;
			}
			
		}
		//printf("\n%d / %d = %d",i,j, flag);
		if (flag == 0)
		{
			y++;
			prime[y] = i;
		}
		
		printf("\nprime[%d]  : %d", y, prime[200]);
	}

	return 0;
}