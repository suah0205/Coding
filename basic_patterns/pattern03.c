#include<stdio.h>

int main(){
	int i,n;
	scanf("%d",&n);
	int start,start2,mid,mid2;
	mid=mid2=3;
	int star,star2;
	star=star2=1;
	start=2*n-2;
	for(i=1;i<=n;i++){
		start2=start;
		while(start2>0){
			printf(" ");
			start2--;
		}
		star2=star;
		while(star2>0){
			printf("*");
		mid2=mid;
			while(mid2>0 && star!=1){
					printf(" ");
					mid2--;			
			}
		star2--;		
		}
		printf("\n");
		star++;
		start-=2;
	}
	start=2;
	star-=2;
	for(i=1;i<n;i++){
				start2=start;
			//	printf("start2=(%d)",start2);
				while(start2>0){
					printf(" ");
					start2--;
				}
				star2=star;
				while(star2>0){
					printf("*");
					mid2=mid;
					while(mid2>0 && star!=1){
							printf(" ");
							mid2--;
						}
					star2--;
				}
			printf("\n");
			start+=2;
			star--;
	}	
	return 0;
}
