#include<stdio.h>
#define size 5

void bsort(int a[], int n);
void bsort(int a[], int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	
}
int main()
{
	int a[5],i;
	
	printf("enter 5 no=");
	for(i=0;i<size;i++)
	{
		scanf(" %d",&a[i]);
	}
	bsort(a,size);
	printf("\n array after sorting");
	
	for(i=0;i<size;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
