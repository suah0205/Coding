#include<stdio.h>
#include<stdlib.h>

typedef struct queue list;
struct queue{
	int val;
	list *next;
};

list *tail;
list *push(list *head,int x){
	list *start=head;
	list *tmp;
	tmp=(list*)malloc(sizeof(list));
	tmp->val=x;
	tmp->next=NULL;
	if(head==NULL){
		tail=tmp;
		return tmp;
	}
	else{
		tail->next=tmp;
		tail=tail->next;
	}
	return start;
}

list *print(list *head){
	list *start=head;
	while(start!=tail){
		printf("%d ",start->val);
		start=start->next;
	}
	printf("%d\n",start->val);
return head;
}

list *pop(list *head){
	list *tp;
	tp=head;
	head=head->next;
	free(tp);

	return head;
}

int main(){
	char c;
	list *head=NULL;	
		tail=NULL;
	int n;
	while(1){
		scanf("%c",&c);

		if(c=='i'){
			scanf("%d",&n);
			head=push(head,n);
		}
		else if(c=='d'){
			head=pop(head);
		}
		else if(c=='p'){
			head=print(head);
		}
	}

	return 0;
}
