#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node * Link;
	int data;
	struct Node * Rlink;
};
int key,loc,choice;
struct Node * header=Null;
void insert_at_front(int key)
{
	struct Node*newnode;
	newnode=(struct Node*)malloc(size of struct Node);
	if(newnode==NULL)
	{
		printf("Memory is full");
	}
	if(header==NULL)
	{
		newnode->data=key;
		newnode->newnode;
		newnode->Link=header;
	}
	else
	{
		newnode->data=key;
		newnode->Rlink=header;
		header->Link=newnode;
		header=newnode;
		newnode->Link=header;
	}
}
void insert_at_any(int key,int loc)
{
	struct Node*newnode;
	struct Node*ptr;
	newnode=(struct Node*)malloc(size of(struct Node));
	if(newnode==NULL)
	{
		printf("Memory is full");
	}
	else
	{
		ptr=header;
		while((ptr!=NULL)&&(ptr->data!=loc))
		{
			ptr=ptr->Rlink;
		}
		if (ptr==NULL)
		{
			printf("key not found");
		}
		else
		{
			newnode->Link=ptr;
			newnode->data=key;
			newnode->Rlink=ptr->Rlink;
			ptr->Rlink=newnode;
		}
	}
	void insert_at_end(int key)
	{
		struct Node*newnode;
		struct Node*ptr;
		newnode=(struct Node*)malloc(size of(struct Node));
		if(newnode==NULL){
			printf("Memory is full");
		}
		else
		{
			newnode->data->=key;
			newnode->Rlink=NULL;
			ptr=header;
			while(ptr->Rlink!=NULL)
			{
				ptr=ptr->Rlink;
			}
			ptr->Rlink=newnode;
			newnode->Link=ptr;
			void delete_at_front()
			{
				struct Node*ptr;
				ptr=header;
				if(ptr==NULL)
				{
					printf("NOneed to delete");
				}
				else
				{
					header=ptr->Rlink;
					printf("The deleted item is %d\n",ptr->data);
					free(ptr);
				}
			}
			int delete_at_any(int key)
			{
				struct Node*ptr;
				ptr=header;
				while(ptr!=NULL)
				{
					printf("The deleted item is %d\n",ptr->data);
					if(ptr->Rlink!=NULL)
					{
						header=ptr->Rlink;
						header->Link=NULL;
						free(ptr);
						return0;
					}
					else
					{
						header=NULL;
						free(ptr);
						return0;
					}
					if(ptr->Rlink==NULL)
					{
						printf("The deleted item is %d",ptr->data);
						if()
					}
				}
			}
		}
	}
	}


