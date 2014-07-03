//reversed gugudan
#include<stdio.h>
void main()
{
	int i,j,l,a=4,b=10;
	for (i=0;i<4;i++){
		for(l=9;l>0;l--)
		{
				
			for(j=0;j<a;j++)
			{
				printf("%d * %d = %d\t",b,l,b*l);
				b--;
			}
			printf("\n");
			b+=a;
		}
		printf("\n");
		a--;
		b-=(a+1);	
	}
}