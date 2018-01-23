#include <stdio.h>

int main(void) {
	int i,n,a,d;
	scanf("%d%d%d",&n,&a,&d);
	for(i=0;i<a;i++)
	{
		printf("%d\t",n);
		n=n+d;
		
	}
	return 0;
}
