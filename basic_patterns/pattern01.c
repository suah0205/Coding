#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int space,star,star2;
	int i,j;
		scanf("%d",&n);
		star=2*n-1;
		space=0;
		int count;
		count=2;
		star2=star;
		for(i=1;i<=n;i++){
			while(space!=0){
				printf(" ");
				space--;
			}
			space+=count;
			while(star2!=1){
				printf("* ");
				star2--;
			}
			printf("*\n");
			star2=star-count;
		count+=2;
    }		
		count=2;
			star=star2=3;
			space=(n-2)*2;
			int space2;
			space2=space;
			for(j=1;j<n;j++){
				while(space2!=0){
						printf(" ");
						space2--;
				}
				space2=space-count;
				while(star2!=1){
						printf("* ");
						star2--;
					}
				printf("*\n");
				star2=star+count;
				count+=2;
			}


return 0;
}
