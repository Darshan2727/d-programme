#include<stdio.h>
int main()
{
	char a[100];
	int i,j,c;
	printf("enter string:");
	gets(a);
	for(i=0;a[i]!='\0';i++);
	printf("length:%d\n",i);
	c = i;
	for( j = 0; j<(i/2); j++)
	{
		printf("%c %c ",a[j],a[--c]);
	}
	if(i%2!=0)
	{
		printf(" %c",a[(i/2)]);
	}
	
}	
		