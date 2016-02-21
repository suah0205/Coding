#include<stdio.h>

int main(){
	int i,j;
	int star,star2,space,space2;
	int n;

	scanf("%d",&n);
	space=space2=4*n-7;
		int count,counter;
		count=1;
	for(i=1;i<n;i++){
		counter=count;
		while(counter>0){
			printf("* ");
			counter--;
		}
		
		space2=space;
		while(space2>0){
			printf(" ");
			space2--;
	}
		
		counter=count;
		while(counter>0){
			printf(" ");
			printf("*");
			counter--;
		}
	printf("\n");
	count++;
	space-=4;
	}
	int k;
		k=2*n-1;
		while(k>1){
		printf("* ");
		k--;
		}
		printf("*\n");
	count=count-1;
	space=1;
		for(i=1;i<n;i++){
		counter=count;
		while(counter>0){
			printf("* ");
			counter--;
	}
		space2=space;
		while(space2>0){
			printf(" ");
			space2--;
		}

	counter=count;
	while(counter>0){
		printf(" *");
		counter--;
	}
	printf("\n");
	count--;
	space+=4;
	}
			return 0;
}
