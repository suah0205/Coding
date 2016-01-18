#include<stdio.h>
#include<stdlib.h>

typedef struct node tree;
struct node{
	int val;
	tree *left;
	tree *right;
};

tree *insert(tree *root,int x){
		if(root==NULL){
			root=(tree*)malloc(sizeof(tree));
				root->val=x;
				root->left=root->right=NULL;
		}
		else{
				if(x<root->val)
					root->left=insert(root->left,x);

			else if(x>root->val)
				root->right=insert(root->right,x);
		}
	return root;
}

tree *max(tree *root){
	while(root->right){
		root=root->right;
	}
return root;
}

tree *min(tree *root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}

tree *delete(tree *root,int y){
		tree *tmp;
	if(root==NULL)
		printf("elementabsent to delete!\n");

	else if(y<root->val)
		root->left=delete(root->left,y);
	
	else if(y>root->val)
		root->right=delete(root->right,y);

	else if(root->left && root->right){
				tmp=min(root->right);
				root->val=tmp->val;
				root->right=delete(root->right,root->val);
	}

	else{
		tree *var;
		var=root;

		if(root->left==NULL)
			root=root->right;
		else if(root->right==NULL)
			root=root->left;

		free(var);
	}
return root;	
}

void print(tree *jad){
	printf("%d ",jad->val);
	if(jad->left!=NULL)
		print(jad->left);
	if(jad->right!=NULL)
		print(jad->right);
//printf("\n");
}

int main(){
	int x,i,j;
	tree *root=NULL;
	char c;
	while(1){
		scanf("%c",&c);
		if(c=='i'){
			scanf("%d",&x);
			root=insert(root,x);
		}

		else if(c=='d'){
			scanf("%d",&x);
			root=delete(root,x);
		}
		else if(c=='p'){
			print(root);
			printf("\n");
		}
	}

	return 0;
}
