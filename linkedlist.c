#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create(struct node *);
struct node *reverse(struct node *);
struct node *display(struct node *);
struct node *head=NULL;
int main()
{
	int n;
		printf("1.create linked list");
		printf("\n2.reverse linked list");
		printf("\n3.display linked list");
		printf("\n4.quit");
	do
	{
		printf("\nEnter your choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:head=create(head);
			       break;
			case 2:head=reverse(head);
			       break;
			case 3:head=display(head);
			       break;
		    case 4:exit(1);
		}
	}while(n!=4);
return 0;
}

struct node *create(struct node *head)
{
	struct node *temp,*ptr;
	int n;
	do
	{
	 printf("\nEnter -1 to end");
	 printf("\nEnter the data:");
	 scanf("%d",&n);
	 temp=(struct node *)malloc(sizeof(struct node));
	 temp->data=n;
	 if(temp==NULL)
	 {
		printf("memory is not allocated");
		return head;
	 }
	 else
	 {
		if(head==NULL)
		{
			printf("\nLinked list not created.");
			temp->next=NULL;
			head=temp;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			 ptr=ptr->next;
			 ptr->next=temp;
			 temp->next=NULL;
		}
	 }
    }while(n!=-1);
    return head;
}/*
struct node *create_ll(struct node *head)
{
struct node *new_node, *ptr;
int num;
printf("\n Press -1  to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=-1)
{
new_node = (struct node*)malloc(sizeof(struct node));
new_node -> data=num;
if(head==NULL)
{
new_node -> next = NULL;
head = new_node;
}
else
{
ptr=head;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next = new_node;
new_node->next=NULL;
}
printf("\n Enter the data : ");
scanf("%d", &num);
}
return head;
}
*/
struct node *display(struct node *head)
{
	struct node* ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		printf("%d -> ",ptr->data);
		ptr=ptr->next;
	}
	return head;
}
struct node *reverse(struct node *head)
{
    struct node *nextnode,*current,*prev;
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;
    return head;
}
