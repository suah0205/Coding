#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node tree;
struct node{
	char val;
	tree *left;
	tree *right;
};

typedef struct stack ptr;
struct stack{
	tree *key;
	ptr *next;
};
ptr *head;
	tree *x;
ptr *push(ptr *head,tree *x){
	ptr *tmp;
	tmp=(ptr*)malloc(sizeof(ptr));
	tmp->key=x;
	tmp->next=NULL;

	if(head==NULL)
		return tmp;

	else{
		tmp->next=head;
		head=tmp;
		return head;
		}
}

ptr *pop(ptr *head){
	ptr *var;

		x=head->key;	
		var=head;
		head=head->next;
		free(var);
	return head;
}

int main(){
	int i,l;
	tree *root=NULL;
	head=NULL;
	char str[1005];
	scanf("%s",str);
	l=strlen(str);
		tree *one,*two;
		tree *leaf;
	for(i=0;i<l;i++){
		if(str[i]=='*' || str[i]=='+' || str[i]=='-'){
				
				root=(tree*)malloc(sizeof(tree));
				head=pop(head);
				one=x;
				head=pop(head);
				two=x;
				root->val=str[i];
				root->right=one;
				root->left=two;
	
			head=push(head,root);
	
	}
		else{
				leaf=(tree*)malloc(sizeof(tree));
				leaf->val=str[i];
				leaf->right=NULL;
				leaf->left=NULL;
				head=push(head,leaf);
		}
	}

		printf("root=[%c]\n",root->val);
		root=root->left;
		printf("root->left=[%c]\n",root->val);
		root=root->right;
		printf("root->left->right=[%c]\n",root->val);
		return 0;
}
