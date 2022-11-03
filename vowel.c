 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[100];
 	int len,i,c=0;
 	printf("enter a lower case string");
 	gets(str);
 	len=strlen(str);
 	 for(i=0;i<len;i++)
 	{
 	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
 	{
	 	c++;
	 }
}
	 printf("%d",c);
if(c>=5)
{
printf("\nvowels");
}
else
{
printf("\nno");
}
 return 0;
 }
