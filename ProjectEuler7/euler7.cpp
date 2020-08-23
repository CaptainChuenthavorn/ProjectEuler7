#include<stdio.h>
int main()
{
	int n, i, j, flag, y;
	int prime[100];
	
	y = 0;
	//scanf("%d",&n)
	for (i = 2;i < 1000;i++) {
		flag = 0;
		for (j = 2;j < 500 ;j++)
		{
			if ((i-1) % j == 0 ) {
				flag = 1;
				break;
			}
			
		}
		printf("\n%d / %d = %d",i,j, flag);
		if (flag == 0)
		{
			y++;
			prime[y] = i;
		}
		
		//printf("\nprime[%d]  : %d", i, prime[y]);
	}





	return 0;
}