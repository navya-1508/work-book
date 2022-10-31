 #include<stdio.h>
int main()
{
	int a[200];
	int n,i,low,high,mid,key;
	int flag=0,pos;
	printf("\nEnter size of array");
	scanf("%d",&n);
	low=0;
	high=n-1;
	printf("\nEnter elements in sorted order");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nElements are: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nEnter key element");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			pos=mid;
			break;
		}
		if(key<a[mid])
		{
			high=mid-1;
		}
		if(key>a[mid])
		{
			low=mid+1;
		}
	}
	if(flag==1)
	printf("\nElement Found at position %d",pos);
	else
	{
	printf("\nElement not found it can be insert at position :%d",pos-1);
}
	return 0;
}
