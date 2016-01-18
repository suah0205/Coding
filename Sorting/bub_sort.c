#include<stdio.h>
void swap(int *x,int *y)
{
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}


int main()
{
	int i,j,a[10000],n;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				swap(&a[i],&a[j]);
		}

	for(i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
	return 0;
}


