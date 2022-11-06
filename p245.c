#include<stdio.h>
int main()
{
	int nums1[100],nums2[100];
	int m,n,i,s,j;
	int p,flag=0,temp;
	float median;
	printf("Enter the size of 1st array");
	scanf("%d",&m);
	printf("\nEnter the size of 2nd array");
	scanf("%d",&n);
	printf("\nEnter elements in 1st array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&nums1[i]);
	}
	printf("\nEnter elements in 2nd array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums2[i]);
	}
 for(p=1;p<m;p++)
 {
 	for(i=0;i<m-p;i++)
 	{
 		if(nums1[i]>nums1[i+1])
 		{
 			temp=nums1[i];
 			nums1[i]=nums1[i+1];
 			nums1[i+1]=temp;
		 }
	 }
}
  printf("\n sorted array:\n");
 for(i=0;i<m;i++)
 {
 printf("\t%d",nums1[i]);
}
for(p=1;p<n;p++)
 {
 	for(i=0;i<n-p;i++)
 	{
 		if(nums2[i]>nums2[i+1])
 		{
 			temp=nums2[i];
 			nums2[i]=nums2[i+1];
 			nums2[i+1]=temp;
		 }
	 }
}
  printf("\n sorted array:\n");
 for(i=0;i<n;i++)
 {
 printf("\t%d",nums2[i]);
}
if(m%2==0)
{
	median=(float)(nums1[m/2]+nums1[(m-1)/2])/2;
	printf("\nmedian is %f",median);
}
else
{
printf("\n median is %d",nums1[m/2]);
}
if(n%2==0)
{
	median=(float)(nums2[n/2]+nums2[(n-1)/2])/2;
	printf("\nmedian is %f",median);
}
else
{
printf("\n median is %d",nums2[n/2]);
}
	return 0;
}
