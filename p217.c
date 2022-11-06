#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int len,i;
	printf("enter a string");
	scanf("%[^\n]s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i%2==0)
		 printf("%c",a[i]);
	}
	printf("\t");
	for(i=0;i<len;i++)
	{
		 if(i%2==1)
		 printf("%c",a[i]);
	}
	return 0;
}
