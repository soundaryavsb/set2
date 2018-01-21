#include <stdio.h>

int main(void) {
	int f,s,i;
	scanf("%d%d",&f,&s);
	for(i=(f+1);i<=(s-1);i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}

	return 0;
}
