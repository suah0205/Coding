#include<stdio.h>
long long int ct_sw;
long long int ct_cm;
int insert(int a[],int n){
	int value,i,hole;
	for(i=1;i<n;i++)
	{
	//	ct_cm++;
		value=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>value)
		{	
			//ct_sw++;
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
}
int main(){
	int n,t,i,a[10000];
	scanf("%d",&t);
	while(t--)
	{

		ct_sw=0;
		ct_cm=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	insert(a,n);

        for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");

//printf("%lld\n",(ct_cm-ct_sw));
	}
	return 0;
}
