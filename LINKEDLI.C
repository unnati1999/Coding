#include<stdio.h>
#include<conio.h>
struct lklist
{
	int info;
	struct lklist *next;
};
struct lklist *head=NULL;
void main()
{
	void insertionAtBeg();
	void deletionAtBeg();
	void traversal();
	int ch;
	clrscr();
	while(1)
	{
		printf("\n1.Insertion At Beg.");
		printf("\n2.Deletion At Beg.");
		printf("\n3.Traversal");
		printf("\n4.Exit");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertionAtBeg();
				break;
			case 2:
				deletionAtBeg();
				break;
			case 3:
				traversal();
				break;
			case 4:
				exit(0);
		}
	}
}
//CODE FOR INSERTION IN LINKED LIST
void insertionAtBeg()
{
	int item;
	struct lklist *temp;
	temp=(struct lklist *)malloc(sizeof(struct lklist));
	printf("Enter Item : ");
	scanf("%d",&item);
	temp->info=item;
	temp->next=head;
	head=temp;
	printf("Inserted : %d",item);
}
/* CODE FOR TRAVERSAL IN LINKED LIST */
void traversal()
{
	struct lklist *temp;
	printf("List : ");
	if(head==NULL)
	{
		printf("Empty");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp!=head)
			printf(", ");
		printf("%d",temp->info);
		temp=temp->next;
	}
}
//CODE FOR DELETION IN LINKED LIST
void deletionAtBeg()
{
	struct lklist *temp;
	int item;
	if(head==NULL)
		return;
	temp=head;
	head=head->next;
	item=temp->info;
	free(temp);
	printf("Deleted : %d",item);
}