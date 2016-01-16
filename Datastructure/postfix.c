#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pack list;
struct pack{
	int val;
	list *next;
};
int y;

list *push(list *head,int x){
	list *var;
	var=(list*)malloc(sizeof(list));

	var->val=x;
	var->next=NULL;
	if(head==NULL){
		return var;
	}

	else{
		var->next=head;
		head=var;
	}
return head;
}
list *pop(list *head){

	list *var;
	var=head;
	y=var->val;
	head=head->next;
	free(var);
	return head;
}
/*void print(list *head){
	list *var=head;
	while(var!=NULL){
		printf("%c ",var->val);
		var=var->val;
		}
}
*/
int main(){
		int l,i,j;
		int a,b;
		int z;
		list *head=NULL;
		char str[10007];
		scanf("%s",str);
		l=strlen(str);
		int sum;
		for(i=0;i<l;i++){
		
			if(str[i]=='+' || str[i]=='-' || str[i]=='*'){
				head=pop(head);
					a=y;
				head=pop(head);
					b=y;
				if(str[i]=='+'){
					sum=a+b;
				}
				else if(str[i]=='-'){
					sum=a-b;
				}
				else if(str[i]=='*'){
					sum=a*b;
				}
			//	printf("%d\n",sum);
			//	z=sum-'a';
				head=push(head,sum);
			}
		else{
			z=str[i]-'0';
		head=push(head,z);
	}
}
	int ans;
		ans=head->val;
		free(head);
printf("%d\n",ans);
return 0;
}
