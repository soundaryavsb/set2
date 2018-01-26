#include <stdio.h>
int main(void) {
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf("%d",i);
		}
	}

	return 0;
}
