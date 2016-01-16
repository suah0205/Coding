#include<stdio.h>
#include<stdlib.h>

typedef struct stack obj;
struct stack{
	int val;
	obj *next;
};

obj *insert(obj *head,int x){
		obj *var=(obj*)malloc(sizeof(obj));
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
//also deletes all the copies of the no. y to be deleated.
obj *del(obj *head,int y){
		obj *var;
		obj *ret=head;
		obj *tmp;
		while(head->next!=NULL){
			if(head->next->val==y){
				var=head->next;
				if(head->next->next==NULL){
					//condition for checking if the last number is deleated.
				head->next=NULL;
			}
				else{
					head->next=head->next->next;
				}
				free(var);
				//if(head->next==NULL){
				//	break;
				//}
			//	else{
			///	free(var);
			//	}
				}
			if(head->next!=NULL){
			head=head->next;
			}
		}
	
		if(ret->val==y){
			tmp=ret;
			ret=ret->next;
			free(tmp);
		}
		return ret;
}

obj *print(obj *head){
	obj *start=head;
	while(head!=NULL){
		printf("%d ",(head->val));
		head=head->next;
	}
	printf("\n");

	return start;
}

int main(){
		int i,l,x;
		obj *head=NULL;
		char c;
while(1){
		scanf("%c",&c);


		if(c=='i'){
			scanf("%d",&x);
			head=insert(head,x);
		}
else if(c=='d'){
	scanf("%d",&x);
	head=del(head,x);
}

else if(c=='p'){
head=print(head);
}
}
return 0;
}
